#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n, k;
    cin >> n >> k;
    if(n == 1){
        cout << -1 << endl;
        return 0;
    }
    vector<int> ans(k);
    for(int i = 0; i < k - 1; i++){
        bool fd = false;

        for(int j = 2; j <= n; j++){
            if(n % j == 0){
                fd = true;
                n /= j;
                ans[i] = j;
                break;
            }
        }
        if(fd == false){
            cout << -1 << endl;
            return 0;
        }
    }
    if(n == 1) cout << -1 << endl;
    else{
        ans[k - 1] = n;
        REP(i, k){
            if(i != 0) cout << " ";
            cout << ans[i];
        }
        cout << endl;
    }
}