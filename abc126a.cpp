#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int len, a; cin >> len >> a;
    string s; cin >> s;
    string b;
    transform(s.begin(), s.end(), b.begin(), ::tolower);
    REP(i, len){
        if(i == a - 1) cout << b[a - 1];
        else cout << s[i];
    }
    cout << endl;
}