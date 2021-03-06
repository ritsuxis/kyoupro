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
#define NIL -1
#define MAX 2 * 100000 + 10

vector<int> num(MAX);
vector<vector<int>> child(MAX);
vector<bool> fd(MAX, false);

void add(int p){
    REP(i, child[p].size()){
        if(fd[child[p][i]]) continue;
        fd[child[p][i]] = true;
        num[child[p][i]] += num[p];
        add(child[p][i]);
    }
}


signed main(void){
    int n, q; cin >> n >> q;


    REP(i, n - 1){
        int a, b; cin >> a >> b;
        child[a - 1].push_back(b - 1);
        child[b - 1].push_back(a - 1);
    }
    REP(i, q){
        int a, b; cin >> a >> b;
        num[a - 1] += b;
    }
    
    fd[0] = true;
    add(0);
    
    REP(i, n){
        if(i != 0) cout << " ";
        cout << num[i];
    }
    cout << endl;
    
}