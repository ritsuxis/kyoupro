#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    while (true){
        int a, d, n; cin >> a >> d >> n;
        if(a == 0 and d == 0 and n == 0) return 0;
        else{
            int count = 0, ans;
            for(int i = a; i <= 10e6; i += d){
                if(i == 1) continue; // 1は素数ではない
                bool flag = true;
                FOR(j, 2, sqrt(i) + 1){
                    if(i % j == 0){
                        flag = false;
                        break;
                    }
                }
                if(flag or i == 2) count++;
                if(count == n){
                    ans = i;
                    break;
                }
            }
            cout << ans << endl;
        }
    }
    
}