#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    string s; cin >> s;
    int top = 0, end = s.size() - 1, ans = 0;
    if(s.size() == 1) cout << 0 << endl;
    else if(s.size() == 2) cout << (s[0] == s[1] ? 0 : 1) << endl;
    else{
        while (top != end){
            if(s[top] != s[end]) ans++;
            if(top + 1 == end) break;
            top++;
            end--;
        }
        cout << ans << endl;
    }
    
}