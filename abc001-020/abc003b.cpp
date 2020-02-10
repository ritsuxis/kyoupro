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

bool judge(char a){
    string s = "atcoder";
    REP(i, s.size()) if(a == s[i]) return true;
    return false;
}

signed main(void){
    string s; cin >> s;
    string t; cin >> t;
    bool flag = true;
    REP(i, s.size()){
        if(s[i] != t[i]){
            if(s[i] == '@' and judge(t[i])) continue;
            else if(t[i] == '@' and judge(s[i])) continue;
            else flag = false;
        }
    }
    cout << (flag ? "You can win" : "You will lose") << endl;
}