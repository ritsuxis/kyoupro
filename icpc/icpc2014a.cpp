#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    while(true){
        double x, y, s; cin >> x >> y >> s;
        if(x == 0 and y == 0 and s == 0){
            return 0;
        }
        else{
            int ans = 0;
            for(int i = 1; i < s; i++){
                double a = i, b = s - i;
                double preA = (100 * a) / (100 + x), preB = (100 * b) / (100 + x);
                int afterA = (preA * (100 + y)) / 100, afterB = (preB * (100 + y)) / 100;
                ans = max(ans, afterA + afterB);
            }
            cout << ans << endl;
        }
    }
}