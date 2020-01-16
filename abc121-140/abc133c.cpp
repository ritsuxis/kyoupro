#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (ll i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    ll l, r; cin >> l >> r;
    ll ans = INF;
    bool flag = false;
    FOR(i, l, r){
        FOR(j, i + 1, r + 1){
            ans = min(ans, (i * j) % 2019);
            if(ans == 0){
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    cout << ans << endl;

}