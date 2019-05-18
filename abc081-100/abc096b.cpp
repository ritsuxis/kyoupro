#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    vector<int> a(3); cin >> a[0] >> a[1] >> a[2];
    int n; cin >> n;
    whole(sort, a, greater<int>());
    REP(i, n) a[0] *= 2;
    cout << whole(accumulate, a, 0) << endl;


}