#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
#define Fill(x, v, y) fill(x, x + v, y);
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;
const long long INFTY = (1LL<<32);
const double PI = 3.1415926535;
const int MOD = 1000000007; // 計算してからmodで割る ans = (ans * a) % mod
#define int long long
template <typename T = long long > T in () { T x; cin >> x; return(x);}
// int a = in() のように使うlong long以外の型の時はstirng s = in<string>()のように型を指定する

signed main(void){
    int n, l; cin >> n >> l;

    int dp[l + 1];
    REP(i, l + 1) dp[i] = INF;
    dp[0] = 0;

    bool hurdle[l + 1];
    REP(i, l + 1) hurdle[i] = false;
    REP(i, n){
        int tmp; cin >> tmp;
        hurdle[tmp] = true;
    }

    int t1, t2, t3; cin >> t1 >> t2 >> t3;

    REP(i, l){
        int go;
        // 1
        go = i + 1;
        if(hurdle[go]) dp[go] = min(dp[go], dp[i] + t1 + t3);
        else dp[go] = min(dp[go], dp[i] + t1);


        // 2
        go = i + 2;
        if(go > l) dp[l] = min(dp[l], dp[i] + (t1 + t2) / 2);
        else if(hurdle[go]) dp[go] = min(dp[go], dp[i] + t1 + t2 + t3);
        else dp[go] = min(dp[go], dp[i] + t1 + t2);

        // 3
        go = i + 4;
        if(go > l){
            if(l - i == 3) dp[l] = min(dp[l], dp[i] + t1/2 + t2/2 + t2*2); // 3マス差
            else if(l - i == 2) dp[l] = min(dp[l], dp[i] + t1/2 + t2/2 + t2); // 2マス差
            else dp[l] = min(dp[l], dp[i] + t1/2 + t2/2); // 1マス差
        }
        else if(hurdle[go]){
            dp[go] = min(dp[go], dp[i] + t1 + 3*t2 + t3);
        }
        else dp[go] = min(dp[go], dp[i] + t1 + 3*t2);

    }

    cout << dp[l] << endl;
}