#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;



int main(void){
    int n; cin >> n;
    ll point[110];
    bool dp[10010] = {false};
    REP(i, n) cin >> point[i];

    dp[0] = true;
    // 今回、dpの配列数は点数の合計としてあり得る値（条件より100*100=10000）
    // 中身は今までにそれがでてきたか出てきてないか（メモ）

    REP(i, n){
        // dpの中身がtrueになってるのにあり得る最低は10000-point[選んでるやつ]だからj = 10000でも計算時間は十分
        // これを選ぶ選ばないっていう操作は考えなくてもいい、なぜなら遷移先としてあり得るやつ全てがtrueになるから
        for(int j = 10000 - point[i]; j >= 0; j--){
            if(dp[j] == true) dp[j + point[i]] = true;
        }
    }
    int count = 0;

    REP(i, 10010) if(dp[i] == true) count++;
    cout << count << endl;
}