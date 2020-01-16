#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int t, b, u, d, l, r;
    cin >> t >> b >> u >> d >> l >> r;
    int n; cin >> n;
    vector<int> p(n);
    REP(i, n) cin >> p[i];
    int count = 0;
    FOR(i, 1, n){
        if(p[i] == t){
            if(p[i - 1] == b) count += 2;
            else if(p[i - 1] == t) count += 0;
            else count++;
        }
        if(p[i] == b){
            if(p[i - 1] == t) count += 2;
            else if(p[i - 1] == b) count += 0;
            else count++;
        }
        if(p[i] == u){
            if(p[i - 1] == d) count += 2;
            else if(p[i - 1] == u) count += 0;
            else count++;
        }
        if(p[i] == d){
            if(p[i - 1] == u) count += 2;
            else if(p[i - 1] == d) count += 0;
            else count++;
        }
        if(p[i] == l){
            if(p[i - 1] == r) count += 2;
            else if(p[i - 1] == l) count += 0;
            else count++;
        }
        if(p[i] == r){
            if(p[i - 1] == l) count += 2;
            else if(p[i - 1] == r) count += 0;
            else count++;
        }
    }
    cout << count << endl;
}