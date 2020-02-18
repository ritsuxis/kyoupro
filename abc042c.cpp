#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;
const double PI = 3.1415926535;
const int MOD = 1000000007; // 計算してからmodで割る ans = (ans * a) % mod
#define int long long
template <typename T = long long > T in () { T x; cin >> x; return(x);}
// int a = in() のように使うlong long以外の型の時はstirng s = in<string>()のように型を指定する

int n, ans = INF;
vector<int> num = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void f(int x){
    if(x >= n){
        ans = min(ans, x);
        return;
    }
    REP(i, num.size()){
        int tmp = x;
        tmp = x * 10 + num[i];
        if(tmp == 0) continue;
        f(tmp);
    }

}

signed main(void){
    int k; cin >> n >> k;
    REP(i, k){
        int tmp = in();
        for(auto it = num.begin(); it != num.end();){
            if(*it == tmp){
                it = num.erase(it);
            }else{
                it++;
            }
        }
    }

    f(0);
    cout << ans << endl;
    
    
}