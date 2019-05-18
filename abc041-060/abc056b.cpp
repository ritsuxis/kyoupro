#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int w, a, b; cin >> w >> a >> b;
    int ans;
    if(a < b){
        int rt = a + w; // right
        if(b < rt) ans = 0;
        else ans = b - rt;
    }
    else{
        int rt = b + w;
        if(a < rt) ans = 0;
        else ans = a - rt;
    }
    cout << ans << endl;
}