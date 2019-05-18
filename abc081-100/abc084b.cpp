#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int a, b; cin >> a >> b;
    string s; cin >> s;
    bool flag = 1;
    REP(i, a) if(s[i] == '-') flag = 0;
    if(s[a] != '-') flag = 0;
    FOR(i, a + 1, a + b + 1) if(s[i] == '-') flag = 0;
    cout << (flag ? "Yes" : "No") << endl;

}