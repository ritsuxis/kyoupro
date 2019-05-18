#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    string s; cin >> s;
    bool r = 0, l = 0;
    int count, ans = 0;
    REP(i, n){
        count = 0;
        for(char c = 'a'; c <= 'z'; c++){
            r = l = false;
            REP(j, i){
                if(s[j] == c) l = true;
            }
            FOR(j, i, n){
                if(s[j] == c) r = true;
            }
            if(l and r) count++;
        }
        ans = max(ans, count);
    }
    cout << ans << endl;
}