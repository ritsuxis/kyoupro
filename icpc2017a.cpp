#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
   while (true){
       int n, m; cin >> n >> m;
       if(n == 0 and m == 0) return 0;
       else{
           vector<int> price(n);
           REP(i, n) cin >> price[i];
           int ans = 0;
           REP(i, n){
               REP(j, n){
                   if(j == i) continue;
                   else{
                       int tmp = price[i] + price[j];
                       if(ans < tmp and tmp <= m) ans = tmp;
                   }
               }
           }
           if(ans == 0) cout << "NONE" << endl;
           else cout << ans << endl;
       }
       
   }

}