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

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

ll W, N, K;
ll width[55], important[55];
ll dp[55][10010][55] = {0}; // 中身は重要度、dp[スクリーンショット][幅の合計][枚数]

int main(void){
    cin >> W >> N >> K;
    REP(i, N) cin >> width[i] >> important[i];

    dp[0][0][0] = 0; // 初期条件

    ll count = 0;
    
    for(ll sum_s = 0; sum_s <= K; sum_s++){
        for(ll i = 0; i < N; i++){
            for(ll sum_w = 0; sum_w <= W; sum_w++){
                if(sum_w - width[i] >= 0 and sum_s - 1 >= 0){
                    chmax(dp[i + 1][sum_w][sum_s], dp[i][sum_w - width[i]][sum_s - 1] + important[i]);
                }
                chmax(dp[i + 1][sum_w][sum_s], dp[i][sum_w][sum_s]);
            }
        }
    }

    cout << dp[N][W][K] << endl;
}