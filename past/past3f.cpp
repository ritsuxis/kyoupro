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
    int n; cin >> n;
    vector<vector<char>> ue((n + 1) / 2, vector<char>(n)); // 真ん中まではvectorで保持
    vector<set<char>> shita(n / 2); // 下半分はsetで保持

    REP(i, (n + 1)/ 2){
        REP(j, n) cin >> ue[i][j];
    }
    REP(i, n / 2){
        REP(j ,n){
            char inp; cin >> inp;
            shita[i].insert(inp);
        }
    }
    string x = "", y = ""; // xは上半分の結果yは下半分の結果
    REP(i, n / 2){
        REP(j, n){
            auto it = shita[(n / 2) - i - 1].find(ue[i][j]);
            if(it != shita[(n / 2) - i - 1].end()){
                x = x + *it;
                y = *it + y;
                break;
            }
            if(j == n - 1){ // 上で最後までbreakせずに来たということはmatchするものがなかったということ
                cout << -1 << endl;
                return 0;
            }
        }
    }
    if(n % 2 != 0) x = x + ue[n / 2][0]; // 文字数が奇数の時の処理　真ん中はなんでもいい

    cout << x + y << endl;
}