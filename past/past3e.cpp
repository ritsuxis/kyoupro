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
    int n, m, q; cin >> n >> m >> q; // 頂点n 辺m クエリq
    bool edge[n][n];
    REP(i, n){
        REP(j, n){
            edge[i][j] = false;
        }
    } 

    REP(i, m){ // 行列で辺を保持
        int u, v; cin >> u >> v;
        edge[u - 1][v - 1] = true;
        edge[v - 1][u - 1] = true;
    }

    int edge_color[n];
    REP(i, n) cin >> edge_color[i];

    REP(i, q){
        int task; cin >> task;

        if(task == 1){
            int x; cin >> x;
            cout << edge_color[x - 1] << endl;
            REP(j, n){
                if(edge[x - 1][j] == true){
                    edge_color[j] = edge_color[x - 1];
                }
            }
        }
        else{ // 2
            int x, y; cin >> x >> y;
            cout << edge_color[x - 1] << endl;
            edge_color[x - 1] = y;
        }
    }
}