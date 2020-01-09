#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

// 最大公約数
int gcd(int a, int b){
    int c;
    if (a < b) {
        a+=b; b=a-b; a-=b;
    }
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(void){
    int n; cin >> n;
    REP(i, n){
        int a, b; cin >> a >> b;
        cout << gcd(a, b) << endl;
    }
}