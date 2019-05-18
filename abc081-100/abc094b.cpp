#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n, m, x; cin >> n >> m >> x;
    vector<int> cost(m);
    int high = 0, low = 0;
    REP(i, m){
        cin >> cost[i];
        if(cost[i] > x) high++;
        else low++;
    }
    cout << (high > low ? low : high) << endl;
}