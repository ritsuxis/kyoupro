#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n, q; cin >> n >> q;
    bool user[n][n] = {};
    REP(i, q){
        int task, u1, u2; cin >> task;
        if(task == 1) cin >> u1 >> u2;
        else cin >> u1;

        if(task == 1) user[u1 - 1][u2 - 1] = true;
        else if(task == 2) REP(i, n) { if(user[i][u1 - 1] == true) user[u1 - 1][i] = true;}
        else if(task == 3){
            vector<bool> c(n);
            REP(i, n) {
                if(user[u1 - 1][i] == true) {
                    REP(j, n) {
                        if(user[i][j] == true and j != u1 - 1) c[j] = true;
                    }
                }
            }
            REP(i, n) if(c[i]){
                user[u1 - 1][i] = true;
            }
        }

    }
    REP(i, n){
        REP(j, n){
            if(user[i][j]) cout << 'Y';
            else cout << 'N';
        }
        cout << endl;
    }
}