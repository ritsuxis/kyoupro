#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;
const int MOD = 1000000007; // 計算してからmodで割る ans = (ans * a) % mod
#define int long long
template <typename T = long long > T in () { T x; cin >> x; return(x);}
// int a = in() のように使うlong long以外の型の時はstirng s = in<string>()のように型を指定する

signed main(void){
    int a, b, c; cin >> a >> b >> c;
    int top = max(max(a, b), c), dobe = min(min(a, b), c);
    if(a == top) cout << 1 << endl;
    else if(a == dobe) cout << 3 << endl;
    else cout << 2 << endl;

    if(b == top) cout << 1 << endl;
    else if(b == dobe) cout << 3 << endl;
    else cout << 2 << endl;

    if(c == top) cout << 1 << endl;
    else if(c == dobe) cout << 3 << endl;
    else cout << 2 << endl;
}