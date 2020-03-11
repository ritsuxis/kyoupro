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

// ここから 
// 最小全域木 -> Kruskal -> O(|E|log|E|)

//Union FInd
class UnionFind{
    public:
        // rank -> 木の高さ, p -> 親へのポインタ(自分自身が親なら自分)
        vector<int> rank, p;

        UnionFind() {}
        UnionFind(int size){
            rank.resize(size, 0);
            p.resize(size, 0);
            REP(i, size) makeSet(i); // 互いに素な集合の作成
        }

        // 互いに素な集合の作成
        void makeSet(int x){
            p[x] = x;
            rank[x] = 0;
        }

        // x, yが同じグループに属するかどうか
        bool same(int x, int y){
            return findSet(x) == findSet(y);
        }

        // x, yを合併
        void unite(int x, int y){
            link(findSet(x), findSet(y));
        }

        // 低い木を高い木に合併
        void link(int x, int y){
            if(rank[x] > rank[y]){
                p[y] = x;
            }else{
                p[x] = y;
                if(rank[x] == rank[y]){
                    rank[y]++;
                }
            }
        }

        // 代表の要素（根）の特定（これが同じ要素は同じ集合に属する）
        int findSet(int x){
            if(x != p[x]){
                p[x] = findSet(p[x]);
            }
            return p[x];
        }
};

class Edge{
    public:
    int source, target, cost;
    Edge(int source = 0, int target = 0, int cost = 0):
    source(source), target(target), cost(cost) {}
    bool operator < (const Edge &e) const { // "<"で比較されたときに返す処理
        return cost < e.cost;
    }
};

int Kruskal(int V, vector<Edge> edges, int k){
    int totalCost = 0;
    whole(sort, edges); // 辺の整列(軽い辺の順に並べる)
    UnionFind dset = UnionFind(V + 1); // V+1でもいい

    REP(i, V) dset.makeSet(i); // 初期化 辺の集合を空にする

    int source, target;
    int cnt = 0;
    REP(i, edges.size()){
        Edge e = edges[i];

        if(!dset.same(e.source, e.target)){
            // MST.push_back(e); Minimum Spanning Tree(最小全域木)
            cnt++;
            if(cnt <= V - k) totalCost += e.cost; // 重みが小さい順に取り出されるので初めに木と木を繋げるやつが最適
            dset.unite(e.source, e.target);
        }
    }
    return totalCost;
}

signed main(void){

    int V, E; cin >> V >> E;
    int k = in(); // 開催都市の数
    vector<Edge> edges;
    REP(i, E){
        int source, target, cost;
        cin >> source >> target >> cost;
        edges.push_back(Edge(source, target, cost));
    }

    cout << Kruskal(V, edges, k) << endl;

    return 0;

}