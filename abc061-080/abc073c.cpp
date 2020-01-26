#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    map<int, int> mp;
    REP(i, n){
        int tmp; cin >> tmp;
        auto fd = mp.find(tmp); // iterator, mp.findは、みつけれなかったときにmp.end()を返す
        if(fd != mp.end()) {
            if(mp.at(tmp) == 1) mp[tmp] = 0;
            else mp[tmp] = 1;
        }
        else mp.emplace(tmp, 1);
    }
    ll ans = 0;
    for(pair<int, int> i : mp){ // 範囲ベースのfor
            if(i.second == 1) ans++;
    }
    cout << ans << endl;

}