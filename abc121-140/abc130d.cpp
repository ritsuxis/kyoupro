#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    ll n, k; cin >> n >> k;
    vector<ll> num(n), ruiseki(n + 1);
    ruiseki[0] = 0;
    ll first = 0;
    REP(i, n){
        cin >> num[i];
        ruiseki[i + 1] = ruiseki[i] + num[i];
        if(first == 0 and ruiseki[i + 1] >= k) first = i + 1;
    }
    ll count = 0;
    FOR(i, first, n + 1){
        for(ll j = i - 1; j >= 0 ; j--){
            if(ruiseki[i] - ruiseki[j] >= k){
                count += j + 1;
                break;
            }
        }
    }
    cout << count << endl;
}