#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    vector<int> c(n);
    REP(i, n){
        cin >> c[i];
        if(i == 0) continue;
        else{
            int check = c[i] - c[i - 1];
            if(check > 0) cout << "up " << check << endl;
            else if (check == 0) cout << "stay" << endl;
            else if (check < 0) cout << "down " << -check << endl;
        }
    }
}