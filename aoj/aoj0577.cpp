#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int N; // 3<=N<=100
int num[110];
ll dp[110][25]; // dpの中身はi番目までの組み合わせでyが何個できるか、dp[N][計算結果0<=y<=20]

// 答えが32bit整数値に収まらないならそれをdpの中身として考えてやればいい

int main(void){
    cin >> N;
    REP(i, N) cin >> num[i];
    
    dp[0][num[0]] = 1; // 初期条件

    for(int i = 1; i < N - 1; i++){
        for(int cul = 0; cul <= 20; cul++){
            if(dp[i - 1][cul] >= 1 and cul - num[i] >= 0) dp[i][cul - num[i]] += dp[i - 1][cul];
            if(dp[i - 1][cul] >= 1 and cul + num[i] <= 20) dp[i][cul + num[i]] += dp[i - 1][cul]; 
        }
    }

    cout << dp[N - 2][num[N - 1]] << endl;
}