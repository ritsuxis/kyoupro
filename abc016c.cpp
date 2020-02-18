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
    int n, m; cin >> n >> m;
    vector<vector<bool>> people(n);
    REP(i, n) REP(j, n){
        if(i != j) people[i].push_back(false);
        else people[i].push_back(true);
    }
    REP(i, m){
        int a, b; cin >> a >> b;
        people[a - 1][b - 1] = true;
        people[b - 1][a - 1] = true;
    }
    
    REP(i, n){
        set<int> cnt;
        REP(j, n){
            if(i == j) continue;
            if(people[i][j] == true){
                REP(k, n) if(people[j][k] == true and people[i][k] == false) cnt.insert(k); 
            }
        }
        cout << cnt.size() << endl;
    }
}