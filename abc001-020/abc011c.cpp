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
    int n = in();
    int ng1, ng2, ng3; cin >> ng1 >> ng2 >> ng3;
    if(n == ng1 or n == ng2 or n == ng3){
        cout << "NO" << endl;
        return 0;
    }
    REP(i, 100){
        for(int j = 3; j > 0; j--){
            if(n - j != ng1 and n - j != ng2 and n - j != ng3){
                n -= j;
                // cout << n << endl;
                break;
            }
            else if(j == 1){
                cout << "NO" << endl;
                return 0;
            }
        }
        if(n <= 0){
            n = 0;
            break;
        }
    }
    if(n == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}