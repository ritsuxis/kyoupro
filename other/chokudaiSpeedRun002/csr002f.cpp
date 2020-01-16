#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

bool compare_by_A(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}

int main(void){
    int n; cin >> n;
    vector<pair<int, int>> coin(n);
    REP(i, n){
        cin >> coin[i].first >> coin[i].second;
        if(coin[i].first > coin[i].second){
            int temp = coin[i].first;
            coin[i].first = coin[i].second;
            coin[i].second = temp;
        };
    }
    whole(sort, coin, compare_by_A);
    int ans = 1;
    REP(i, n - 1) if(coin[i].first == coin[i + 1].first and coin[i].second == coin[i + 1].second) ans += 0;
    else ans++;
    cout << ans << endl;
}