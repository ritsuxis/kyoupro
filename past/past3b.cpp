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
    int n, m, q; cin >> n >> m >> q; // 参加者n, 問題数m, クエリq
    bool n_solved[n][m]; 
    REP(i, n){
        REP(j, m) n_solved[i][j] = false;
    }
    vector<int> m_point_now(n);
    REP(i, m) m_point_now[i] = n;

    REP(i, q){
        int q; cin >> q;
        if(q == 1){
            int player; cin >> player;
            int ans = 0;
            REP(solved, m){
                if(n_solved[player - 1][solved] == true){
                    ans += m_point_now[solved]; // 行列計算のイメージ
                }
            }
            cout << ans << endl;
        }
        else{ // 2
            int player, m_num; cin >> player >> m_num;
            n_solved[player - 1][m_num - 1] = true;
            m_point_now[m_num - 1]--;            
        }
    } 
}