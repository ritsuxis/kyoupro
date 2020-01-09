#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    while(true){
        int n; cin >> n;
        if(n == 0) return 0;
        else if(n == 1) cout << 1 << endl;
        else{
            int count = 0;
            FOR(i, n + 1, 2 * n + 1){
                bool flag = true;
                FOR(j, 2, sqrt(i) + 1){
                    if(i % j == 0){
                        flag = false;
                        break;
                    }
                }
                if(flag) count++;
            }
            cout << count << endl;
        }
    }
}