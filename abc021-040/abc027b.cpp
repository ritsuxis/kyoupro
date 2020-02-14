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
    int ans = 0;
    vector<int> num(n);
    REP(i, n) cin >> num[i];
    int ac = whole(accumulate, num, 0);
    if(ac % n != 0) cout << -1 << endl;
    else{
        int people = ac / n;
        int now = 0;
        REP(i, n){
            now += num[i];
            if(now != people * (i + 1)) ans++;
        }
        cout << ans << endl;
    }
}