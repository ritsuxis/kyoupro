#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    string s;
    cin >> s;
    bool ans;
    if(s[0] == s[1] and s[1] == s[2] and s[2] == s[3] and s[3] == s[0]) ans = 0;
    else if(s[0] == s[1] and s[2] == s[3]) ans = 1;
    else if(s[0] == s[2] and s[1] == s[3]) ans = 1;
    else if(s[0] == s[3] and s[1] == s[2]) ans = 1;
    else ans = 0;
    cout << (ans ? "Yes" : "No") << endl;
}