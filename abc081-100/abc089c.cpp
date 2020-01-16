#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    ll n; cin >> n;
    ll m = 0, a = 0, r = 0, c = 0, h = 0;
    REP(i, n){
        string s; cin >> s;
        if(s[0] == 'M') m++;
        else if(s[0] == 'A') a++;
        else if(s[0] == 'R') r++;
        else if(s[0] == 'C') c++;
        else if(s[0] == 'H') h++;
    }

    ll ans = 0;
    ans += m * a * r;
    ans += m * a * c;
    ans += m * a * h;
    ans += m * r * c;
    ans += m * r * h;
    ans += m * c * h;
    ans += a * r * c;
    ans += a * r * h;
    ans += a * c * h;
    ans += r * c * h;

    cout << ans << endl;
}