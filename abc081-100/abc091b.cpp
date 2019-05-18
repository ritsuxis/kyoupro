#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    vector<string> A(n);
    REP(i, n) cin >> A[i];
    int m; cin >> m;
    vector<string> B(m);
    REP(i, m) cin >> B[i];
    int ans = 0;
    auto calc = [&](string s){
        int buf = 0;
        for(string t : A){
            if(t == s) buf++;
        }
        for(string t : B){
            if(t == s) buf--;
        }
        return buf;
    };
    for(string t : A) ans = max(ans, calc(t));
    cout << ans << endl;
}