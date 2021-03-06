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

signed main(void){
    int n = in();
    int ans_num;
    // 範囲をsqrt(n) <= i <= nにするとTLEする（範囲の大きさは一緒じゃない！！）
    // ex) n = 8の時 1 <= n <= sqrt(8) = 2√2 と 2√2 <= n <= 8は範囲の広さが全然違う
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            ans_num = i;
        }
    }

    string ans = to_string(n / ans_num);
    cout << ans.size() << endl;
}