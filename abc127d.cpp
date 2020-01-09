#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

bool compare_by_A(pair<ll, ll> a, pair<ll, ll> b){
    return a.first > b.first;
}

int main(void){
    ll n, m; cin >> n >> m;
    vector<pair<ll, ll>> A(n);
    REP(i, n){
        int a;
        cin >> a;
        A[i] = make_pair(a, 1);
    }
    REP(i, m){
        int a, b; cin >> a >> b;
        A.push_back(make_pair(b, a));
    }
    whole(sort, A, compare_by_A);
    ll ans = 0, sum = 0, i = 0;
    while(1){
        if(sum + A[i].second < n){
            sum += A[i].second; 
            ans += A[i].first * A[i].second;
        }
        else {
            ans += A[i].first * (n - sum);
            break;
        }
        i++;
    }
    cout << ans << endl;
}