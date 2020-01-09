#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    vector<int> num(n);
    int res = 0;
    REP(i, n){
        cin >> num[i];
        res += num[i];
    }
    whole(sort, num);
    int pool = 0;
    REP(i, n){
        if(res % 10 != 0) break;
        else res -= num[i];
        if(num[i] % 10 == 0) pool += num[i]; 
    }
    
    if(res != 0) cout << res + pool << endl;
    else cout << 0 << endl;
 
}