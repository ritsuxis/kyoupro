#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    if(n == 0){
        cout << 0 << endl;
        return 0;
    }
    vector<int> ans(0);
    while(n != 1){
        ans.push_back(abs(n % (-2)));
        if(n % (-2) == 0) n = n / (-2);
        else n = (n + (-2 + 1)) / (-2);
    }
    ans.push_back(1);
    for(int i = ans.size() - 1; i >= 0; i--){
        cout << ans[i];
    }
    cout << endl;
}