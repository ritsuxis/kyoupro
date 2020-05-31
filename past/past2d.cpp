#include<bits/stdc++.h>
#define REP(i, n) for (ll i = 0; i < n ; i++)
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

string s, p = "abcdefghijklmnopqrstuvwxyz.";

ll solve(string a){
    ll ret = 0;
    if(a.size() > 3) return 0;
    if(a.size() != 0) {
        REP(i, ll(s.size() - a.size() + 1)){
            bool flag = true;
            REP(j, a.size()){
                if(a[j] == '.') continue;
                if(a[j] != s[i + j]) flag = false;
            }

            if(flag){
                ret ++;
                break; // 同じ組み合わせで複数回カウントされるのを防ぐ
            }
        }
    }
    REP(i, ll(p.size())){
        ret += solve(a + p[i]);
    }
    return ret;
}

signed main(void){
    cin >> s;
    cout << solve("") << endl;
}