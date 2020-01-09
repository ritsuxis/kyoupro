#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;
const int MOD = 1e9 + 7;

int main(void){
    int n; cin >> n;
    vector<int> A(0);
    bool even;
    int sz = (n % 2 == 0 ? n / 2 : n / 2 + 1);
    REP(i, sz) A.push_back(0);
    even = (n % 2 == 0 ? true : false);
    
    bool ng = false; 

    REP(i, n){
        int num; cin >> num;
        if(even){
            if(num % 2 == 0) ng = true;
            A[(num - 1) / 2]++;
        }
        else {
            if(num % 2 != 0) ng = true;
            if(num == 0) A[0]++;
            else A[num / 2]++;
        }
    }

    REP(i, sz){
        if(!even and i == 0 and A[i] != 1){
            ng = true;
            break;
        }
        else if(A[i] != 2 and i != 0){
            ng = true;
            break;
        }
    }
    
    ll ans = 1, mul = n / 2;
    if(ng) cout << 0 << endl;
    else{
       
        REP(i, mul){
            ans = (ans * 2) % MOD;
        }
        cout << ans << endl;
    }
    
}