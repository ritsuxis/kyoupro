#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    ll n; cin >> n;
    ll count = 0;
    vector<int> A(n);
    REP(i, n) {
        ll tmp; cin >> tmp;
        if(tmp <= 0) count++;
        A[i] = abs(tmp);
    }
    whole(sort, A);
    ll ans = whole(accumulate, A, 0ll);
    if(count % 2 != 0) ans = ans - A[0] * 2;
    cout << ans << endl;
}