#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n, m; cin >> n >> m;
    ll dp[100010];
    bool ana[100010];
    REP(i, 100010) dp[i] = 0;
    REP(i, 100010) ana[i] = true;

    REP(i, m){
        int num; cin >> num;
        ana[num] = false;
    }
    
    dp[0] = 1;
    FOR(i, 1, n + 1){
        if(ana[i - 1]) dp[i] += dp[i - 1];
        if(i > 1 and ana[i - 2]) dp[i] += dp[i - 2];
        dp[i] %= 1000000007;
    }

    cout << dp[n] << endl;

}