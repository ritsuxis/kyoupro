#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int N; cin >> N;
    int order[25], food[25], more[25];
    REP(i, N) cin >> order[i];
    REP(i, N) cin >> food[i];
    REP(i, N - 1) cin >> more[i];

    ll res = 0;
    REP(i, N){
        res += food[order[i] - 1];
        if(order[i] + 1 == order[i + 1]) res += more[order[i] - 1];
    }

    cout << res << endl;
}