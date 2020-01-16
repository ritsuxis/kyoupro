#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

ll N, D;
ll num[6];
double dp[2][70][70][70]; // それぞれ、[サイコロの試行回数][2が出る回数][3が出る回数][5が出る回数]中身はその積がでる確率

int main(void){
    cin >> N >> D;

    // サイコロの目のなかでの素因数は2,3,5
    while(D % 2 == 0) num[2]++, D /= 2;
    while(D % 3 == 0) num[3]++, D /= 3;
    while(D % 5 == 0) num[5]++, D /= 5;

    // そもそも2,3,5の積だけで表せないDは無理
    if(D > 1){
        printf("%.10lf",0);
        return 0;
    }

    dp[0][0][0][0] = 1.0;

    REP(i, N){
        for(ll pc2 = 0; pc2 <= num[2]; pc2++) for(ll pc3 = 0; pc3 <= num[3]; pc3++) for(ll pc5 = 0; pc5 <= num[5]; pc5++){
            for(ll j = 1; j <= 6; j++){
                // 出た値により遷移先が変わる
                // 下のごちゃごちゃしたのは2 or6ならpc2+1, 4ならpc2+2ということを表してる
                ll nc2 = min(num[2], ( (j == 2 or j == 6) ? pc2 + 1 : (j == 4 ? pc2 + 2 : pc2)));
                ll nc3 = min(num[3], (j %3 ==0? pc3 + 1: pc3));
                ll nc5 = min(num[5], ( j% 5== 0? pc5 +1: pc5));
                // minの意味は積がDよりも大きくなった場合も、同じDPの遷移先としてしてやることでD以上になる確率として計算することを表す
                // また、一番外側のNは試行回数なのでi回でdp[?][num[2]][num[3]][num[5]]（D）にたどり着くことが倍数が出る確率の計算になる
                // なぜならi回でDにたどり着く確率をp[i]とするとそのあとのN-i回でなにが出てもその積がDの倍数になる確率は1
                // よって、p[i]をそれぞれ求めて足してやればいい

                // 試行回数を表す遷移先の数としては試行前と後の２通りあればいい
                // i &1は偶数なら1奇数なら0
                // 遷移前から遷移先に行く確率は1/6、また、他の場合から同じ遷移先にいくかもしれないので
                // それらの合計の確率
                dp[(i + 1)&1][nc2][nc3][nc5] += dp[i &1][pc2][pc3][pc5] / 6.0;
            }
            dp[i &1][pc2][pc3][pc5] = 0; // リセット（情報は全部(i + 1）&1に伝わってる）
        }
    }

    printf("%.10lf\n",dp[N&1][num[2]][num[3]][num[5]]);
    return 0;





}