#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    ll t, a, n; cin >> t >> a >> n;
    
    if(t - n > 0) t -= n;
    else if(a + t - n > 0){
        a -= n - t;
        t = 0;
    }else{
        t = 0;
        a = 0;
    }

    cout << t << " " << a << endl;
}