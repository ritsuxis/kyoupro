#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    char a, b; cin >> a >> b;
    vector<char> c = {'A', 'B', 'C', 'D', 'E', 'F'}; //c(6)
    int locA, locB;
    REP(i, 6) { // cの要素数は6
        if(c[i] == a) locA = i;
        if(c[i] == b) locB = i;
    }
    if(locA == locB) cout << "=" << endl;
    else cout << (locA < locB ? "<" : ">") << endl;
}