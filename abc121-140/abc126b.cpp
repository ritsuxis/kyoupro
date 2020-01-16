#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    string s; cin >> s;
    int a, b;
    a = (s[0] - '0')*10 + (s[1] - '0');
    b = (s[2] - '0')*10 + (s[3] - '0');
    if(a <= 12 and a > 0 and b <= 12 and b > 0) cout << "AMBIGUOUS" << endl;
    else if(b <= 12 and b > 0) cout << "YYMM" << endl;
    else if(a <= 12 and a > 0) cout << "MMYY" << endl;
    else cout << "NA" << endl;
}