#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    string s; cin >> s;
    whole(sort, s);
    // stringはアルファベットでソートできる
    string t; cin >> t;
    whole(sort, t, greater<int>());
    // stringは辞書順で評価してくれる
    cout << (s < t ? "Yes" : "No") << endl;
}