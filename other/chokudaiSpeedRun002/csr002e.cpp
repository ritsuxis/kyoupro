#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    ll n; cin >> n;
    vector<pair<ll, ll>> A(n);
    REP(i, n){
        cin >> A[i].first >> A[i].second;
        A[i].first /= 2;
    }
    ll ans = 0;
    REP(i, n){
        if(A[i].first >= A[i].second) ans += A[i].second;
        else ans += A[i].first;
    }
    cout << ans << endl;
}