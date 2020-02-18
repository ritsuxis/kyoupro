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

int n, k;
int num[6][6];
bool ans = false;

void f(int x, int y, int z){
    int tmp = x ^ num[y][z];
    if(y == n - 1){
        if(tmp == 0) ans = true;
        return;
    }
    REP(i, k){
        f(tmp, y + 1, i);
    }
}

signed main(void){
    cin >> n >> k;
    REP(i, n) REP(j, k) cin >> num[i][j];
    REP(i, k) f(0, 0, i);
    cout << (ans ? "Found" : "Nothing") << endl;
}