#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    vector<int> p(n);
    REP(i, n) cin >> p[i];
    int cnt = 0;
    REP(i, n){
        if(p[i] != i + 1) cnt++;
    }
    if(cnt == 0 or cnt == 2) cout << "YES" << endl;
    else cout << "NO" << endl;
}