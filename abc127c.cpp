#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n, m; cin >> n >> m;
    int maxL = 0, minR = INF;
    REP(i, m){
        int l, r;
        cin >> l >> r;
        maxL = max(maxL, l);
        minR = min(minR, r);
    }
    int ans = minR - maxL + 1;
    cout << (ans > 0 ? ans : 0) << endl;
}