#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;
#define int long long
const int mod = 1000000007; // 計算してからmodで割る ans = (ans * a) % mod
template <typename T = long long > T in () { T x; cin >> x; return(x);}
// int a = in() のように使うlong long以外の型の時はstirng s = in<string>()のように型を指定する

signed main(void){
    int n = in(), m = in();
    int ans = 1;
    if(abs(n - m) >= 2){
        cout << 0 << endl;
        return 0;
    }
    else{
        if(n == m + 1) swap(n, m);
        REP(i, n){
            ans *= (i + 1);
            ans %= mod;
        }
    }
    ans *= ans;
    ans %= mod;
    if(n == m) ans *= 2 % mod;
    else ans *= (n + 1) % mod;
    ans %= mod;
    cout << ans << endl;
}