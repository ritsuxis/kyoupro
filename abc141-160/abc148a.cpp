#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int a, b; cin >> a >> b;
    if(a != 1 and b != 1) cout << 1 << endl;
    else if(a != 2 and b != 2) cout << 2 << endl;
    else if(a != 3 and b != 3) cout << 3 << endl;
}