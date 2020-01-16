#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

bool judgeInt(char c){
    if(c == '1' or c == '2' or c == '3' or c == '4' or c == '5' or c == '6' or c == '7' or c == '8' or c == '9' or c == '0') return true;
    else return false;
}

int main(void){
    string s; cin >> s;
    if(judgeInt(s[0]) and judgeInt(s[1]) and judgeInt(s[2])){
        int ans = stoi(s);
        cout << ans * 2 << endl;
    }
    else cout << "error" << endl;
}