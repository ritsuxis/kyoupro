#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int N; cin >> N;
    int H[100010]; REP(i, N) cin >> H[i];
    int cnt = 0, res = 0;

    REP(i, N - 1){
        if(H[i] - H[i + 1] >= 0) cnt++;
        else{
            res = max(cnt, res);
            cnt = 0;
        }
    }
    res = max(cnt, res);

    cout << res << endl;
}