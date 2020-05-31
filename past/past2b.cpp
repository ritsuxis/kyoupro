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
    int a = 0, b = 0, c = 0;
    string inp; cin >> inp;
    REP(i, inp.size()){
        if(inp[i] == 'a') a++;
        if(inp[i] == 'b') b++;
        if(inp[i] == 'c') c++;
    }
    int maxi = max({a, b, c});
    if(maxi == a) cout << 'a' << endl;
    else if (maxi == b) cout << 'b' << endl;
    else cout << 'c' << endl;
}