#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n, x, y; cin >> n >> x >> y;
    vector<int> A(n);
    REP(i, n) cin >> A[i];
    whole(sort, A, greater<int>());
    int tk = x, ao = y;
    REP(i, n){
        if(i % 2 == 0) tk += A[i];
        else ao += A[i];
    }
    if(tk == ao) cout << "Draw" << endl;
    else cout << (tk > ao ? "Takahashi" : "Aoki") << endl;

}