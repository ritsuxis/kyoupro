#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int a, b ,c, d; cin >> a >> b >> c >> d;
    bool judge = 0;
    if(c >= a and c - a <= d) judge = 1;
    else if(a >= c and a - c <= d) judge = 1;
    else if(c > a and a + d >= b and b + d >= c) judge = 1;
    else if(a > c and c + d >= b and b + d >= a) judge = 1;
    cout << (judge ? "Yes" : "No") << endl;
}