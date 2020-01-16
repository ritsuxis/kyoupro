#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;


// この手の問題は累積とか尺取りとかあるけど、単純に求めたの引いてくだけなら累積、区間の数とかもとめるなら尺取りが
// いいと思う。しかし今回は入力に関係がなく規則的に数列が決まるため、数列の和から調べる区間等を考えることが必要
// 今回の様なケースの場合に遭遇したらまず数列の和からはいっていったほうがいい。
int main(void){
    while(true){
        int n; cin >> n;
        if(n == 0) return 0;
        else{
            pair<int, int> ans;
            FOR(i, 1, sqrt(2 * n) + 1){
                if((2 * n) % i == 0){
                    int a = ((2 * n / i) - i + 1);
                    if(a % 2 == 0 and a / 2 >= 1) ans = make_pair(a / 2 , i );
                }
            }
            cout << ans.first << " " << ans.second << endl;
        }
    }
}