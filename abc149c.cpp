#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int x; cin >> x;
    bool flag = true;
    if(x == 2){
        cout << x << endl;
        return 0;
    }
    while(flag){
        FOR(i, 2, sqrt(x)){
            flag = false;
            if(x % i == 0){
                flag = true;
                break;
            }
        }
        x++;
    }
    cout << x - 1 << endl;
}