#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int a; cin >> a;
    bool p = 0, w = 0, g = 0, y = 0;
    REP(i, a){
        char b; cin >> b;
        if(b == 'P') p = 1;
        if(b == 'W') w = 1;
        if(b == 'G') g = 1;
        if(b == 'Y') y = 1;
    }
    int ans = 0;
    if(p) ans++;
    if(w) ans++;
    if(g) ans++;
    if(y) ans++;
    cout << (ans == 3 ? "Three" : "Four") << endl;

}