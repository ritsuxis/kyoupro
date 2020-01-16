#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int n, A, B, C;
vector<int> l(0);

int dfs(int cur, int a, int b, int c){
    if(n == cur){
        int mini = min(a, b);
        mini = min(mini, c);
        if(mini > 0) return abs(a - A) + abs(b - B) + abs(c - C) - 30;
        else return INF;
    }
    int ret0 = dfs(cur + 1, a, b, c);
    int ret1 = dfs(cur + 1, a + l[cur], b, c) + 10;
    int ret2 = dfs(cur + 1, a, b + l[cur], c) + 10;
    int ret3 = dfs(cur + 1, a, b, c + l[cur]) + 10;
    int ans = min(ret0, ret1);
    ans = min(ret2, ans);
    ans = min(ret3, ans);
    return ans;
}

int main(void){
    cin >> n >> A >> B >> C;
    REP(i, n){
        int num;
        cin >> num;
        l.push_back(num);
    }
    cout << dfs(0, 0, 0, 0) << endl;
}