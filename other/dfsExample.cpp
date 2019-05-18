#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int n;
int a[20];
int k;

bool dfs(int i, int sum){
    // n個全部について調べ終わったときにsumがkと同じかどうか比べる
    if(i == n) return sum == k;
    // i個目の数を足さない場合
    if(dfs(i + 1, sum)) return true; 
    // 足す場合
    if(dfs(i + 1, sum + a[i])) return true;
    // 全部だめだった時
    return false;
}

int main(void){
    cin >> n;
    REP(i, n) cin >> a[i];
    cin >> k;

    // 初めはiもsumも0から始める(関数の中にi,sumを入れてしまうと毎回0になってしまう)
    bool ans = dfs(0, 0);
   cout << (ans ? "Yes" : "No") << endl;
}