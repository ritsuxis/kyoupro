#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    int A[100010] = {0};
    ll ruiseki[100010] = {0};
    REP(i, n){
        cin >> A[i + 1];
        ruiseki[i + 1] = ruiseki[i] + abs(A[i + 1] - A[i]);
    }
    ruiseki[n + 1] = ruiseki[n] + abs(A[n]); 

    REP(i, n + 2) cout << ruiseki[i] << endl;

    for(int i = 1; i <= n; i++){
        cout << A[n + 1] - A[i + 1] + A[i - 1] + abs(A[i + 1] - A[i - 1]) << endl;
    }

}