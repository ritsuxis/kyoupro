#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

int main(void){
    ll dp[100010], h[100010];
    int n, k; cin >> n >> k;
    REP(i, n) cin >> h[i];
    REP(i, 100010) dp[i] = INF;

    dp[0] = 0;
    FOR(i, 1, n){
        FOR(j, 1, k + 1){
            if(i - j < 0) break;
            chmin(dp[i], dp[i - j]  + abs(h[i] - h[i - j])); //配るdpのが書き方が楽
        }
    }

    cout << dp[n - 1] << endl;
}