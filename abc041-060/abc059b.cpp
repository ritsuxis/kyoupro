#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    string s, t; cin >> s >> t;
    int sizeS = s.size(), sizeT = t.size();
    if(sizeS > sizeT) cout << "GREATER" << endl;
    else if(sizeS < sizeT) cout << "LESS" << endl;
    else{
        bool same = 1;
        REP(i ,sizeS) if(s[i] != t[i]) same = 0;
        if(same) cout << "EQUAL" << endl;
        else{
            int topS = s[0] - '0';
            int topT = t[0] - '0';
            cout << (topS > topT ? "GREATER" : "LESS") << endl;
        }
    }
}