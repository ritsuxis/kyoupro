#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    vector<int> Num(n);
    int ans = 0;
    REP(i, n) cin >> Num[i];
    whole(sort, Num);
    REP(i, n){
        int count = 0, fix = Num[i];
        while(Num[i] == fix){
            count++;
            i++;
        }
        i--;
        if(count != fix) ans += (count > fix ? count - fix : count);
    }
    cout << ans << endl;
}
