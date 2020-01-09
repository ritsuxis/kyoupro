#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

// 最大公約数
ll gcd(ll a, ll b){
    ll c;
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

// 最小公倍数
ll lcm( ll m, ll n ){
    // 引数に０がある場合は０を返す
    if ( ( 0 == m ) || ( 0 == n ) ) return 0;
    return ((m / gcd(m, n)) * n); // lcm = m * n / gcd(m,n)
}

int main(void){
    ll a, b, c, d; cin >> a >> b >> c >> d;
    ll e = lcm(c, d);
    ll ans;
    ans = b / c - a / c + (a % c == 0 ? 1 : 0);
    ans += b / d - a / d + (a % d == 0 ? 1 : 0);
    ans -= b / e - a / e + (a % e == 0 ? 1 : 0);
    cout << (b - a + 1) - ans << endl;
}