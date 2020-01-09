#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int a, b, c; cin >> a >> b >> c;
    int maxi = a; maxi = max(maxi, b); maxi = max(maxi, c);
    a = maxi - a;
    b = maxi - b;
    c = maxi - c;

    int odd = 0;
    if(a % 2 != 0) odd++;
    if(b % 2 != 0) odd++;
    if(c % 2 != 0) odd++;

    int res = 0;
    if(odd == 0){
        res = (a + b + c) / 2;
    }
    else if(odd == 1){
        res = (a + b + c + 3) / 2;
    }
    else if(odd == 2){
        res = (a + b + c) / 2;
    }

    cout <<  res << endl;
}