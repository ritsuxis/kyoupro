#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

int main(void){
    int n; cin >> n;
    ll dp[100010], a[100010];
    REP(i, n) cin >> a[i];
    REP(i, 100010) dp[i] = INF;

    dp[0] = 0;
    REP(i, n - 1){
        chmin(dp[i + 1], dp[i] + abs(a[i + 1] - a[i]));
        if(i + 2 < n) chmin(dp[i + 2], dp[i] + abs(a[i + 2] - a[i]));
        // はみだしてもどうせINFでminにはならないからループもnまででいいしifもいらない
    }

    cout << dp[n - 1] << endl;
}