#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

bool compare_by_A(pair<ll, ll> a, pair<ll, ll> b){
    return a.first < b.first;
}

int main(void){
    ll n, buy; cin >> n >> buy;
    vector<pair<ll, ll> > pairs(n);
    REP(i, n) {
        ll a, b;
        cin >> a >> b;
        pairs[i] = make_pair(a, b);
    }
    whole(sort, pairs, compare_by_A);
    
    ll i = 0, ans = 0;
    while(buy > 0){
        if(pairs[i].second <= buy){
            ans += pairs[i].first * pairs[i].second;
            buy -= pairs[i].second;
        }
        else if(pairs[i].second > buy){
            ans += pairs[i].first * buy;
            buy = 0;
        }
        i++;
    }
    cout << ans << endl;
}