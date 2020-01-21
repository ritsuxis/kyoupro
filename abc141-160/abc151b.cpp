#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n, k, m; cin >> n >> k >> m;
    int sum = 0;
    REP(i, n - 1){
        int tmp;
        cin >> tmp;
        sum += tmp;
    }
    int have_to = n * m - sum;
    if(have_to > k) cout << -1 << endl;
    else if(have_to <= 0) cout << 0 << endl;
    else cout << have_to << endl;
    
}