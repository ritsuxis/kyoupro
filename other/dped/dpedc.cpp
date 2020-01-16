#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int n;
ll a[100010][3] ,dp[100010][3];

int main(void){
    cin >> n;
    REP(i, n) REP(j, 3) cin >> a[i][j];

    REP(i, n){
        REP(j, 3){
            REP(k, 3){
                if(j == k) continue;
                chmax(dp[i + 1][k], dp[i][j] + a[i][k]);
            }
        }
    }

    ll ans = 0;
    REP(i, 3) chmax(ans, dp[n][i]);
    cout << ans << endl;
}