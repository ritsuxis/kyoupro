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
    char keijiban[5][4*n + 1];
    vector<vector<string>> number(10, vector<string>(5)); 

    number[0][0] = "###";
    number[0][1] = "#.#";
    number[0][2] = "#.#";
    number[0][3] = "#.#";
    number[0][4] = "###";

    number[1][0] = ".#.";
    number[1][1] = "##.";
    number[1][2] = ".#.";
    number[1][3] = ".#.";
    number[1][4] = "###";

    number[2][0] = "###";
    number[2][1] = "..#";
    number[2][2] = "###";
    number[2][3] = "#..";
    number[2][4] = "###";

    number[3][0] = "###";
    number[3][1] = "..#";
    number[3][2] = "###";
    number[3][3] = "..#";
    number[3][4] = "###";

    number[4][0] = "#.#";
    number[4][1] = "#.#";
    number[4][2] = "###";
    number[4][3] = "..#";
    number[4][4] = "..#";

    number[5][0] = "###";
    number[5][1] = "#..";
    number[5][2] = "###";
    number[5][3] = "..#";
    number[5][4] = "###";

    number[6][0] = "###";
    number[6][1] = "#..";
    number[6][2] = "###";
    number[6][3] = "#.#";
    number[6][4] = "###";

    number[7][0] = "###";
    number[7][1] = "..#";
    number[7][2] = "..#";
    number[7][3] = "..#";
    number[7][4] = "..#";

    number[8][0] = "###";
    number[8][1] = "#.#";
    number[8][2] = "###";
    number[8][3] = "#.#";
    number[8][4] = "###";

    number[9][0] = "###";
    number[9][1] = "#.#";
    number[9][2] = "###";
    number[9][3] = "..#";
    number[9][4] = "###";

    vector<string> inp(5);
    REP(i, 5){
        cin >> inp[i];
    }
    string ans = "";
    REP(i, n){
        REP(suuji, 10){ // number
            bool flag = true; // 今から見る文字がこれかどうか
            REP(j, 3){ // yoko
                REP(k, 5){ // tate
                    if(number[suuji][k][j] != inp[k][4 * i + j + 1]){
                        flag = false;
                        break;
                    }
                }
                if(!flag) break;
            }
            if(flag){
                ans = ans + to_string(suuji);
                break;
            }
        }
    }

    cout << ans << endl;

}