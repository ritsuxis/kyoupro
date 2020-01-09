#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    int count = 0;
    vector<int> P(n);
    REP(i, n) cin >> P[i];
    FOR(i, 1, n - 1){
        int numMin, numMax;
        numMin = min(P[i - 1], P[i]);
        numMin = min(numMin, P[i + 1]);
        numMax = max(P[i - 1], P[i]);
        numMax = max(P[i + 1], numMax);
        if(P[i] != numMax and P[i] != numMin) count++;
    }
    cout << count << endl;
}