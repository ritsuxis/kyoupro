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

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}


int n, m;
vector<vector<int>> G;
int memo[100100];
int dfs(int x){
    if(memo[x] != -1) return memo[x];

    int res = 0;
    for(auto i : G[x]){
        chmax(res, dfs(i) + 1);
    }
    return memo[x] = res;
}

signed main(void){
    cin >> n >> m;
    G.assign(n, vector<int>());
    REP(i, m){
        int x, y; cin >> x >> y;
        x--; y--;
        G[x].push_back(y);
    }

    REP(i, n) memo[i] = -1;
    int ans = 0;
    REP(i, n) chmax(ans, dfs(i));

    cout << ans << endl;
}