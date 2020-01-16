#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    while(true){
        int n; cin >> n;
        if(n == 0) return 0;
        else{
            vector<pair<int, int>> P(n);
            REP(i, n) cin >> P[i].first >> P[i].second;
            int m; cin >> m;
            vector<pair<char, int>> Go(m);
            REP(i, m) cin >> Go[i].first >> Go[i].second;
            pair<int, int> now = make_pair(10, 10);
            vector<bool> Get(n, false);
            REP(i, m){
                REP(j, Go[i].second){
                    if(Go[i].first == 'N') now.second++;
                    else if(Go[i].first == 'S') now.second--;
                    else if(Go[i].first == 'E') now.first++;
                    else if(Go[i].first == 'W') now.first--;
                    REP(p, n){
                        if(P[p] == now) Get[p] = true;
                    }
                }
            }
            bool ok = true;
            REP(i, n) if(Get[i] == false) ok = false;
            cout << (ok ? "Yes" : "No") << endl;
        }       
    }
}