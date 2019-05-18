#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;
int a[4];
char b[4];

bool dfs(int i, int cul){
    if(i == 4) return cul == 7;

    if(dfs(i + 1, cul + a[i])){
        b[i] = '+';
        return true;
    }

    if(dfs(i + 1, cul - a[i])){
        b[i] = '-';
        return true;
    }

    return false;
}

int main(void){
    int num; cin >> num;
    a[3] = num % 10;
    num /= 10;
    a[2] = num % 10;
    num /= 10;
    a[1] = num % 10;
    num /= 10;
    a[0] = num;
    
    bool ans = dfs(0, 0);
    if(ans) cout << a[0] << b[1] << a[1] << b[2] << a[2] << b[3] << a[3] << "=7" << endl;
}