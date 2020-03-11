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
class UnionFind{
    public:
        // rank -> 木の高さ, p -> キー
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

        // rankの調整
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

        // rankの計算
        int findSet(int x){
            if(x != p[x]){
                p[x] = findSet(p[x]);
            }
            return p[x];
        }
};

signed main(void){
    
    /*
    int n, q; cin >> n >> q;

    UnionFind uf = UnionFind(n); // 整数0~n-1を唯一の要素とする互いに素な集合の作成

    REP(i, q){
        int t, a, b;
        cin >> t >> a >> b;
        if(t == 0) uf.unite(a, b); // 合併
        else if(t == 1){
            // 同じグループに属するかどうか
            if(uf.same(a, b)) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    */
}