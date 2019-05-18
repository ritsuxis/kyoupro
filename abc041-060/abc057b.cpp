#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n, m; cin >> n >> m;
    vector<int> A(n), B(n), C(m), D(m), check(n);
    REP(i, n) cin >> A[i] >> B[i];
    REP(i, m) cin >> C[i] >> D[i];

    REP(i, n){
        int ans = INF;
        REP(j, m){
            if(ans > abs(A[i] - C[j]) + abs(B[i] - D[j]) ){
                ans = abs(A[i] - C[j]) + abs(B[i] - D[j]);
                check[i] = j + 1;
            }
        }
    }

    REP(i, n) cout << check[i] << endl;
}