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
    int x = in(), y = in(), n = in();
    vector<bool> yoko(x + 1), tate(y + 1);
    
    int i;
    REP(j, n){
        int a = in(), b = in(), f = in();
        if(f == 1) for(i = 0; i <= a; i++) yoko[i] = true;
        else if(f == 2) for(i = a + 1; i <= x; i++) yoko[i] = true;
        else if(f == 3) for(i = 0; i <= b; i++) tate[i] = true;
        else for(i = b + 1; i <= y; i++) tate[i] = true;
    }

    /*
    int ans_yoko = whole(count_if, yoko, [](bool x){return x == false;});
    if(ans_yoko != 0) ans_yoko += (yoko[0] and yoko[x] ? 1 : 0);
    int ans_tate = whole(count_if, tate, [](bool x){return x == false;});
    if(ans_tate != 0) ans_tate += (tate[0] and tate[y] ? 1 : 0);
    */

    cout <<  whole(count_if, yoko, [](bool x){return x == false;}) * whole(count_if, tate, [](bool x){return x == false;}) << endl;
}