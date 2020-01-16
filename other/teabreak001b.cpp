#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int t, r_start, r_end; cin >> t >> r_start >> r_end;
    bool now;
    int cnt = 0;
    REP(i, abs(r_end - r_start + 1)){
        int x, y; cin >> x >> y;
        if(i == 0){
            if(y < 0) now = false;
            else now = true;
        }
        else{
            if(y == 0 and now == false) continue;
            else if(y < 0 and now == true) cnt++, now = false;
            else if(y >= 0 and now == false) cnt++, now = true;
        }
    }

    bool ans = false;
    if(t <= cnt) ans = true;
    cout << (ans ? "Yes" : "No" ) << endl;
}