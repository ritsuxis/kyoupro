#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int h, n; cin >> h >> n;
    vector<int> dp(h + 1, INF); // minを求めるのでINFで初期化
    dp[0] = 0; // hpが0の相手に必要な魔力は0
    REP(i, n){
        int a, b; cin >> a >> b;
        REP(j, h){
            int nj = min(j + a, h); // 体力hを越えないようにする
            dp[nj] = min(dp[nj], dp[j] + b); // 比較
        }
    }
    cout << dp[h] << endl;
}