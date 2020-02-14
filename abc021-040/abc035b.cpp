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
    string s; cin >> s;
    int t = in();
    int x = 0, y = 0, qes = 0;
    REP(i, s.size()){
        if(s[i] == 'R') x++;
        else if(s[i] == 'L') x--;
        else if(s[i] == 'U') y++;
        else if(s[i] == 'D') y--;
        else if(s[i] == '?') qes++;
    }
    if(t == 1){
        if(x >= 0) x += qes;
        else x -= qes;
    }
    else if(t == 2){
        REP(i, qes){
            if(x > 0) x--;
            else if(x < 0)x++;
            else{
                if(y >= 0) y--;
                else if(y < 0) y++;
            }
        }
    }
    cout << abs(x) + abs(y) << endl;
}