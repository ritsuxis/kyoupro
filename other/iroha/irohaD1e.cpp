#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    ll n, a, b; cin >> n >> a >> b;
    if(b == 0){
        cout << 0 << endl;
        return 0;
    }
    vector<ll> D(b);
    REP(i, b) cin >> D[i];
    whole(sort, D);
    ll ans = n - b;
    ans -= (D[0] % a == 0 ? D[0] / a - 1 : D[0] / a);
    for(ll i = 1; i < b; i++){
        ll tmp = D[i] - D[i - 1];
        ans -= (tmp % a == 0 ? tmp / a - 1 : tmp / a);
    }
    ll last = n - D[b -1];
    ans -= last / a;
    cout << ans << endl;
}