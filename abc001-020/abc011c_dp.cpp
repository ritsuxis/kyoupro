#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;
const double PI = 3.1415926535;
const int MOD = 1000000007; // 計算してからmodで割る ans = (ans * a) % mod
#define int long long
template <typename T = long long > T in () { T x; cin >> x; return(x);}
// int a = in() のように使うlong long以外の型の時はstirng s = in<string>()のように型を指定する

signed main(void){
    int n = in();
    vector<int> ng(3);
    REP(i, 3) cin >> ng[i];
    
    REP(i, 3) if(n == ng[i]){cout << "NO" << endl; return 0;}
    int dp[n + 1]; // ある数xになるまで最短何手かかるかでdp
    REP(i, n) dp[i] = INF;
    dp[n] = 0; // n != ng のとき、nになるまでかかる手は0手
    for(int i = n; i >= 0; i--){
        if(ng[0] == i) continue;
        if(ng[1] == i) continue;
        if(ng[2] == i) continue;

        for(int j = 1; j <= 3; j++){
            dp[i - j] = min(dp[i] + 1, dp[i - j]);
        }
    }

    cout << (dp[0] <= 100 ? "YES" : "NO") << endl;
}