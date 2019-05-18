#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n, m , c; cin >> n >> m >> c;
    vector<int> B(m); REP(i, m) cin >> B[i];
    int ans = 0;
    REP(i, n){
        int count = 0;
        REP(j, m){
            int tmp;
            cin >> tmp;
            count += tmp * B[j];
        }
        count += c;
        if(count > 0) ans++;
    } 
    cout << ans << endl;
}