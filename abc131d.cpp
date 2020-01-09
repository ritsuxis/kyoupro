#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    vector<pair<int, int>> work(n);
    REP(i, n) cin >> work[i].second >> work[i].first; // sortのしやすさのため逆にしていることに注意
    whole(sort, work);
    ll now = 0;
    bool ok = true;
    REP(i, n){
        now += work[i].second;
        if(now > work[i].first){
            ok = false;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
}