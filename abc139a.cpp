#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    char a[3], b[3];
    REP(i, 3) cin >> a[i];
    REP(i, 3) cin >> b[i];

    int res = 0;
    REP(i, 3) if(a[i] == b[i]) res++;
    cout << res << endl; 
}