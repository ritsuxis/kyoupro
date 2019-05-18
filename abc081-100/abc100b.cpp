#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int d, n; cin >> d >> n;
    if(d == 0) {
        if(n == 100) cout << 101 << endl;
        else cout << n << endl;
    }
    else if(d == 1) {
        if(n == 100) cout << 101 * 100 << endl;
        else cout << 100 * n << endl;
    }
    else if(d == 2) {
        if(n == 100) cout << 10000 * 101 << endl;
        else cout << 10000 * n << endl;
    }
}