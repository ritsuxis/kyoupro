#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int a, b, k; cin >> a >> b >> k;
    if(a == b){
        cout << a << endl;
        return 0;
    }
    if(k > b or b - a < k){
        for(int i = a; i <= b; i++) cout << i << endl;
        return 0;
    }
    vector<int> ans(0);
    for(int i = a; i < k + a; i++) ans.push_back(i);
    int num = b - k + 1;
    if(num <= ans.back()) num = ans.back() + 1;
    for(int i = num; i <= b; i++) ans.push_back(i);
    REP(i, ans.size()) cout << ans[i] << endl;
}