#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (ll i = (a); i <= (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    ll n; cin >> n;
    ll ans = 1000000001000;
    FOR(i,1, sqrt(n)){
        if(n % i == 0) ans = min(ans, (n / i - 1) + (i - 1));
    }

    cout << ans << endl;
}