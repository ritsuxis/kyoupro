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
    REP(i, s.size()){
        if(s[i] + n > 'Z'){
            cout << char(s[i] + n - 'Z' + 'A' - 1);
        }
        else cout << char(s[i] + n);
    }
    cout << endl;
}