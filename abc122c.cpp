#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n, q; cin >> n >> q;
    string s;
    cin >> s;
    vector<int> A(n);
    REP(i, n - 1){
        if(s[i] == 'A' && s[i + 1] == 'C') A[i + 1] = A[i] + 1;
        else A[i + 1] = A[i];
    }
    REP(i, q){
        int r, l; cin >> r >> l;
        cout << A[l - 1] - A[r - 1] << endl;
    }
}