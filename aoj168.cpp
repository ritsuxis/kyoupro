#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

ll dp[100];

int main(void){
    while(true){
        int n; cin >> n;
        if(n == 0) break;
        REP(i, 100) dp[i] = 0;
        dp[0] = 1;

        FOR(i, 1, n + 1){
            dp[i] += dp[i - 1];
            if(i > 1) dp[i] += dp[i - 2];
            if(i > 2) dp[i] += dp[i - 3];
        }
        cout << (dp[n] - 1) / 3650 + 1 << endl; // 1日10種類*365日=3650種類試せる
    }
}