#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    string s; cin >> s;
    bool ans = 0;
    for(char c = 'a'; c <= 'z'; c++){
        ans = 0;
        REP(j, s.size()){
            if(s[j] == c) ans = 1; 
        }
        if(ans == 0){
            cout << c << endl;
            return 0;
        }
    }
    cout << "None" << endl;
}