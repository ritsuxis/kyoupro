#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    int year = 19 * 5 + 20 * 5, year3 = 20 * 10;
    REP(i, n){
        int y, m, d; cin >> y >> m >> d;
        int san = 1000 / 3 - y / 3;
        int ans = (1000 - (y + 1) - san) * year + san * year3 + 1;
        if(y % 3 == 0){
            ans += (10 - m) * 20 + (20 - d);
        }
        else{
            if(m % 2 != 0) ans += ((10 - m) / 2) * 39 + 19 + (20 - d);
            else ans += ((10 - m) / 2) * 39 + (19 - d);
        }
        cout << ans << endl;
    }
}