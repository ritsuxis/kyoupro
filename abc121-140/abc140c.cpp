#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int N; cin >> N;
    int B[110] = {0}; REP(i, N - 1) cin >> B[i]; // ちゃんと初期化しよう
    ll res = B[0];

    if(N == 2) res += B[0];
    else{
        REP(i, N - 1){
        res += min(B[i], B[i + 1]);
        }
        res += B[N - 2];
    }
    cout << res << endl;
}