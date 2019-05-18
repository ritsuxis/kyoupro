#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    string s; cin >> s;
    bool ans = 1;
    if(s[0] != 'A') ans = 0;
    int count = 0;
    for(int i = 2; i < s.size() - 1; i++){
        if(s[i] == 'C') count++;
        else if(isupper(s[i])) ans = 0;
    }
    if(count != 1) ans = 0;
    if(isupper(s[s.size() - 1]) or isupper(s[1])) ans = 0;
    cout << (ans ? "AC" : "WA") << endl;
}