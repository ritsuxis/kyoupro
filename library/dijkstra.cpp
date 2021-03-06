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

// 負の経路を「含まない」単一始点最短経路
// ここから

static const int MAX_V = 100100; // Vによって変える
struct edge {int to, cost; };
typedef pair<int, int> P; // firstは最短距離, secondは頂点の番号

int V; // 頂点数
vector<edge> G[MAX_V];
int d[MAX_V]; // 距離

void Dijkstra(int s) {
    priority_queue<P, vector<P>, greater<P> > que;
    fill(d, d + V, INF); // 範囲内にINFを代入
    d[s] = 0; // 始点での最短距離は０
    que.push(P(0, s));

    while (!que.empty()){
        P p = que.top(); que.pop();
        int v = p.second;
        if (d[v] < p.first) continue; // 取り出したものが頂点の最短距離でなければ無視
        REP(i, G[v].size()){
            edge e = G[v][i];
            // 行先Aへいくためにかかるコストが、今まで見つけたAへのコストより小さければ更新            
            if(d[e.to] > d[v] + e.cost){
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }
}


signed main(void){
    /*
    int E, R; cin >> V >> E >> R; // E ->辺の数, R ->始点
    REP(i, E){
        int s, t, d; cin >> s >> t >> d;
        G[s].push_back({t, d});
    }
    dijkstra(R);
    REP(i, V){
        if(d[i] == INF) cout << "INF" << endl;
        else cout << d[i] << endl;
    }
    */
}