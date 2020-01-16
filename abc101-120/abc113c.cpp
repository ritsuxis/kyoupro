#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n, m; cin >> n >> m;

    vector<ll> city[100010];
    vector<pair<ll, ll>> num(0);

    REP(i, m){
        int pre, year; cin >> pre >> year;
        num.push_back(make_pair(pre, year));
        city[pre].push_back(year);
    }
    REP(i, n) whole(sort, city[i + 1]);

    REP(i, m){ // NlogN
        cout << setw(6) << setfill('0') << num[i].first;
        cout << setw(6) << setfill('0') << distance(city[num[i].first].begin(), whole(lower_bound, city[num[i].first], num[i].second)) + 1 << endl;
    }



}