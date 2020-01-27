#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n, m; cin >> n >> m;
    bool ans = false;
    set<int> fromIsland1, toIslandN;
    REP(i, m){
        int a, b; cin >> a >> b;
        if(a == 1 and b == n) ans = true;
        else if(a == 1) fromIsland1.emplace(b);
        else if(b == n) toIslandN.emplace(a);
    }
    if(!ans){
        REP(i, n){
            if(fromIsland1.find(i) != fromIsland1.end() and toIslandN.find(i) != toIslandN.end()){
                ans = true;
                break;
            }
        }
    }
    cout << (ans ? "POSSIBLE" : "IMPOSSIBLE") << endl;

}