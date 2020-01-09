#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;



int main(void){
    int N;
    cin >> N;
    vector<int> c(N);
    ll res = 0;
    REP(i, N) cin >> c[i];

    REP(i, N){
        FOR(j, i + 1, N){
            if(i == j) continue;
            else{
                res += c[i] * c[j];
            }
        }
    }
    cout << res << endl;
}