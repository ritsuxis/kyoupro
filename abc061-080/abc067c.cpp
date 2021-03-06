#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;
#define int long long
template <typename T = long long > T in () { T x; cin >> x; return(x);}
// int a = in() のように使うlong long以外の型の時はstirng s = in<string>()のように型を指定する

signed main(void){
    int n = in();
    vector<int> num(n);
    REP(i, n){
        int tmp = in();
        if(i == 0) num[i] = tmp;
        else num[i] = num[i - 1] + tmp;
    }
    int ans = 2 * 10e14;
    REP(i, n - 1) ans = min(ans, abs(num[i] - (num[n - 1] - num[i])));
    cout << ans << endl;

}