#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n, d; cin >> n >> d;
    vector<vector<int>> Z(n);
    REP(i, n){
        REP(j, d){
            int tmp;
            cin >> tmp;
            Z[i].push_back(tmp);
        }
    }
    int ans = 0;
    REP(i, n){
        FOR(j, i + 1, n){
            int sqr = 0;
            REP(k, d) sqr += pow(Z[i][k] - Z[j][k], 2);
            for(int k = 1; k <= sqr; k++){
                if(k * k == sqr){
                    ans++;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}