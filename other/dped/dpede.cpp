#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const long long INF = 1LL<<60;

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

const int MAX_N = 110;
const int MAX_V = 100100;

// 入力
int N;
long long W, weight[MAX_N], value[MAX_N]; // 品物の個数は 100 個なので少し余裕持たせてサイズ 110 に

// DPテーブル
long long dp[MAX_N][MAX_V];


int main(void){
    cin >> N >> W;
    REP(i, N) cin >> weight[i] >> value[i];

    REP(i, MAX_N) REP(j, MAX_V) dp[i][j] = INF;

    dp[0][0] = 0;

    REP(i, N){
        REP(sum_v, MAX_V){
            // この時のdpの中身は重さを表してる
            if(sum_v - value[i] >= 0) chmin(dp[i + 1][sum_v], dp[i][sum_v - value[i]] + weight[i]);

            chmin(dp[i + 1][sum_v], dp[i][sum_v]);

        } 
    }

    ll res = 0;
    REP(sum_v, MAX_V){
        if(dp[N][sum_v] <= W) res = sum_v;
    }
    cout << res << endl;
}