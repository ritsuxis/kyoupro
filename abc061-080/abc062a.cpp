#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int x, y; cin >> x >> y;
    if(x == 2 or y == 2) cout << "No" << endl;
    else if(x == 4 or x == 6 or x == 9 or x == 11){
        if(y == 4 or y == 6 or y == 9 or y == 11) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else if(y == 1 or y == 3 or y== 5 or y == 7 or y == 8 or y == 10 or y == 12) cout << "Yes" << endl;
    else cout << "No" << endl;
}