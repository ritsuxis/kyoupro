#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n, x; cin >> n >> x;
    vector<int> loc(n);
    REP(i, n) cin >> loc[i];
    int d = 0, count = 1, i = 0;
    while(d <= x){
        d += loc[i];
        if(d <= x) count++;
        i++;
        if(i > n - 1) break;
    }
    cout << count << endl;
}