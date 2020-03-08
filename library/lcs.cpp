#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
#define Fill(x, v, y) fill(x, x + v, y);
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;
const double PI = 3.1415926535;
const int MOD = 1000000007; // 計算してからmodで割る ans = (ans * a) % mod
#define int long long
template <typename T = long long > T in () { T x; cin >> x; return(x);}
// int a = in() のように使うlong long以外の型の時はstirng s = in<string>()のように型を指定する

// ここから

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

const int MAX_S = 3100;

signed main(void){
    vector<vector<int>> dp(MAX_S, vector<int>(MAX_S));
    string s, t; cin >> s >> t;
    REP(i, MAX_S) REP(j, MAX_S) dp[i][j] = 0;
    
    REP(i, s.size()){
        REP(j, t.size()){
            if(s[i] == t[j]) chmax(dp[i + 1][j + 1], dp[i][j] + 1); // 同じ文字なら生成される文字数は増える
            chmax(dp[i + 1][j + 1], dp[i + 1][j]); // 増えない
            chmax(dp[i + 1][j + 1], dp[i][j + 1]); // 増えない
        }
    }
    cout << dp[s.size()][t.size()] << endl;

    /* 復元
    string ans = "";
    int i = s.size(), j = t.size();
    while(i > 0 and j > 0){
        if(dp[i][j] == dp[i - 1][j]) i--;
        else if(dp[i][j] == dp[i][j -1]) j--;
        else{
            ans = s[i - 1] + ans;
            i--, j--;
        }
    }
    cout << ans << endl;
    */
}