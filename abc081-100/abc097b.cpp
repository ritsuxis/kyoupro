#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int x; cin >> x;
    int ans = 0;
    if(x == 1) {
        cout << 1 << endl;
        return 0;
    }
    for(int i = 2; i <= sqrt(x); i++){
        int j = i, preans = i;
        while (preans < x) preans *= j;
        if(preans > x) preans /= j;
        ans = max(ans, preans);
    }
    cout << ans << endl;
}