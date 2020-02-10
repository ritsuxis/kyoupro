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

// 最大公約数
long long gcd(long long a, long long b){
    long long c;
    if (a < b) {
        a+=b; b=a-b; a-=b;
    }
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

signed main(void){
    int n; cin >> n;
    set<int> num;
    REP(i, n){
        int tmp = in();
        num.insert(tmp);
    }
    if(num.size() == n) cout << "YES" << endl;
    else cout << "NO" << endl;
}