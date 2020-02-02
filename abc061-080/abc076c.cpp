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
    string s, t; cin >> s >> t;
    vector<string> ans;

    int now = 0;
    if(s.size() < t.size()){
        cout << "UNRESTORABLE" << endl;
        return 0;
    }
    REP(i, s.size() - t.size() + 1){
        bool flag = true;
        REP(j, t.size()) if(s[i + j] != t[j] and s[i + j] != '?') flag = false;
        if(flag){
            string tmp = s;
            REP(j, t.size()) tmp[i + j] = t[j];
            REP(j, tmp.size()) if(tmp[j] == '?') tmp[j] = 'a';
            ans.push_back(tmp);
        }
    }
    if(ans.empty()) cout << "UNRESTORABLE" << endl;
    else{
        whole(sort, ans);
        cout << ans[0] << endl;
    }

    
}