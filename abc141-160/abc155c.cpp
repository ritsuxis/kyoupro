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
    vector<string> s(n);
    REP(i, n){
        cin >> s[i];
    }
    whole(sort, s);
    vector<pair<int, string>> a;
    string now = s[0];
    int cnt = 0;
    REP(i, n){
        if(now == s[i]) cnt++;
        else{
            a.push_back(make_pair(cnt, now));
            cnt = 1;
            now = s[i];
        }
        if(i == n - 1) a.push_back(make_pair(cnt, now));
    }
    whole(sort, a, greater<>());
    vector<string> ans;
    cnt = a[0].first;
    REP(i, a.size()){
        if(a[i].first == cnt) ans.push_back(a[i].second);
    }
    whole(sort, ans);
    REP(i, ans.size()) cout << ans[i] << endl;
    
}