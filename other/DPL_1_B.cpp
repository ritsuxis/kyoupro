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

ll dp[110][100010] = {0}; //dpの中身は価値、dp[N][weight]
// なんか変数を全部外にだしたらうまくいった（mainの中に入ってると強制終了してしまった）
// ２次元配列をmainのなかで宣言するとバグる？

int main(void){
    int N, W; 
    int value[110], weight[110];
    
    cin >> N >> W;
    REP(i, N) cin >> value[i] >> weight[i];

    
    dp[0][0] = 0; // 初期設定

    for(int i = 0; i < N; i++){
        for(int w = 0; w <= W; w++){
            if(w - weight[i] >= 0)  chmax(dp[i + 1][w], dp[i][w - weight[i]] + value[i]);

            chmax(dp[i + 1][w], dp[i][w]);
        }
    }

    cout << dp[N][W] << endl;


}