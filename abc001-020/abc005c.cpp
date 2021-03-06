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
    int t, n; cin >> t >> n;
    vector<int> tako(n);
    REP(i, n) cin >> tako[i];
    int m = in();
    vector<int> people(m);
    REP(i, m) cin >> people[i];
    if(n < m) cout << "no" << endl;
    else{
        bool ans = true;
        int sale = 0;
        REP(i, m){
            while(ans){
                if(people[i] - tako[sale] < 0) ans = false;
                else if(people[i] - tako[sale] <= t){
                    sale++;
                    break;
                }
                else sale++;
                if(sale >= n) ans = false;
            }
            if(!ans) break;
        }
        cout << (ans ? "yes" : "no") << endl;
    }
}