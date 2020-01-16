#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    ll n; cin >> n;
    vector<ll> card(n);
    ll minInAll = INF, minInOdd = INF;
    ll afterSubOdd = 0, afterSubAll = 0;
    ll ans = 0;
    REP(i, n){
        cin >> card[i];
        minInAll = min(minInAll, card[i]);
        if(i % 2 == 0) minInOdd = min(minInOdd, card[i]);
        // cout << "minInAll " << minInAll << endl;
    }
    int q; cin >> q;
    REP(i, q){
        int task, sellCard, num;
        cin >> task;
        if(task == 1){
            cin >> sellCard >> num;
            if(card[sellCard - 1] - afterSubAll - (sellCard % 2 != 0 ? afterSubOdd : 0) < num) continue;
            else{
                card[sellCard - 1] -= num;
                minInAll = min(minInAll, card[sellCard - 1] - afterSubAll - (sellCard % 2 != 0 ? afterSubOdd : 0));
                if(sellCard % 2 != 0) minInOdd = min(minInOdd, card[sellCard - 1] - afterSubAll - (sellCard % 2 != 0 ? afterSubOdd : 0));
                ans += num;
            }
        } 
        else if(task == 2){
            cin >> num;
            if(minInOdd < num) continue;
            else{
                afterSubOdd += num;
                if(minInOdd == minInAll) minInAll -= num;
                minInOdd -= num;
                minInAll = min(minInAll, minInOdd);
                // cout << "afterSubOdd " << afterSubOdd << endl;
            }
        }
        else{
            cin >> num;
            if(minInAll < num) continue;
            else{
                afterSubAll += num;
                minInAll -= num;
                minInOdd -= num;
                // cout << "afterSubAll " << afterSubAll << endl;
            }
        }
    }
    // cout << "afterSubAll" << afterSubAll << endl;
    // cout << "afterSubOdd" << afterSubOdd << endl;
    // cout << ans << endl;
    cout << afterSubAll * card.size() + afterSubOdd * ((card.size() + 1) / 2) + ans << endl;
}