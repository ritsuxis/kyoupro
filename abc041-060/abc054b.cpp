#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n, m; cin >> n >> m;
    vector<string> A(n), B(m);
    REP(i, n) cin >> A[i];
    REP(i, m) cin >> B[i];
    bool judge = false;

    for(int ly = 0;ly <= n; ly++){
        for(int lx = 0; lx <= n; lx++){
            if(ly + m - 1 >= n or lx + m - 1 >= n) continue;

            bool match = true;
            REP(y, m){
                REP(x, m){
                    if(A[ly + y][lx + x] != B[y][x]) match = false;
                }
            }
            if(match) judge = true;
        }
    }

    if(judge) cout << "Yes" << endl;
    else cout << "No" << endl;

}