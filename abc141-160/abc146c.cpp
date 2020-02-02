#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;
const int MOD = 1000000007; // 計算してからmodで割る ans = (ans * a) % mod
#define int long long
template <typename T = long long > T in () { T x; cin >> x; return(x);}
// int a = in() のように使うlong long以外の型の時はstirng s = in<string>()のように型を指定する
#define cal(d) (x - b * d) / a
int a, b, x;

signed main(void){
    a = in();
    b = in();
    x = in();
    int ans;
    if(x - b <= 0) cout << 0 << endl;
    else{
        // cout << "in" << endl;
        ans = (cal(1) < 10 ? cal(1) : 9);
        for(int i = 2; i <= 9; i++){
            if(cal(i) >= pow(10, i - 1)) ans = (cal(i) < pow(10, i) ? cal(i) : pow(10, i) - 1);
            else break;
        }
        // 10のa乗の桁はa+1桁
        if(cal(10) >= pow(10, 9)) ans = pow(10, 9);
        cout << ans << endl;
    }
}