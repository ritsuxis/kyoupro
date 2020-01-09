#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    int cnt_odd = 0;
    REP(i, n){
        if(1 <= i + 1 and i + 1 < 10) cnt_odd++;
        else if(100 <= i + 1 and i + 1 < 1000) cnt_odd++;
        else if(10000 <= i + 1 and i + 1 < 100000) cnt_odd++;
    }
    cout << cnt_odd << endl;
}