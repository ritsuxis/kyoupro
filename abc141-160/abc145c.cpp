#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    double n; cin >> n;
    double ans = 0;

    vector<pair<double, double>> root(n);
    REP(i, n) cin >> root[i].first >> root[i].second;

    REP(i, n - 1){
        FOR(j, i + 1, n){
            ans += sqrt(pow(root[i].first - root[j].first, 2.0) + pow(root[i].second - root[j].second, 2.0));
        }
    }
    cout << fixed << setprecision(8) << (ans * 2) / n << endl;
}