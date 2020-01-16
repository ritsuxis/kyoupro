#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int N;
long long W, weight[110], value[110]; // 品物の個数は 100 個なので少し余裕持たせてサイズ 110 に

// DPテーブル
long long dp[110][100100] = {0};

int main() {
    cin >> N >> W;
    for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    // DPループ // なんか俺の書いた奴は手元でうまく動かなかったからコピペした
    for (int i = 0; i < N; ++i) {
        for (int sum_w = 0; sum_w <= W; ++sum_w) {

            // i 番目の品物を選ぶ場合（選ぶことが出来る場合）
            if (sum_w - weight[i] >= 0) {
                chmax(dp[i+1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
            }

            // i 番目の品物を選ばない場合（上で選ぶことが出来ても選ばない場合も遷移させておくことが必要）
            chmax(dp[i+1][sum_w], dp[i][sum_w]); 
        }
    }

    // 最適値の出力
    cout << dp[N][W] << endl;
}