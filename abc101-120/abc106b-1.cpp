#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    int cnt = 0, ans = 0;
    for(int i = 1; i <= n; i += 2){
        cnt = 0;
        for(int j = 1; j <= i; j += 2){
            if(i % j == 0) cnt++;
        }
        if(cnt == 8) ans++;
    }
    cout << ans << endl;
}