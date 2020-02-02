#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;
const int MOD = 1000000007; // 計算してからmodで割る ans = (ans * a) % mod
#define int long long
template <typename T = long long > T in () { T x; cin >> x; return(x);}
// int a = in() のように使うlong long以外の型の時はstirng s = in<string>()のように型を指定する


// Nの制限が小さいので全探索で解ける（maxで2^15）
// bitを使うことで各々が正直か不親切か分ける

// bit で立ってるやつを数える
int counter(int x){
    if(x == 0) return 0;
    return counter(x >> 1) + (x & 1);
}

void solve(){
    int n = in();
    int A[20]; // 余分に
    int x[20][20], y[20][20];
    for(int i = 1; i <= n; i++){
        cin >> A[i];
        for(int j = 1; j <= A[i]; j++){
            cin >> x[i][j] >> y[i][j];
        }
    }
    int ans = 0;
    for(int bits = 1; bits < (1 << n); bits++){
        bool ok = true;
        for(int i = 1; i <= n; i++){
            // 正直者だけを抜き出す
            if(!(bits & (1 << (i - 1)))) continue; // &はbit単位の論理積(例えば1111110と1000の論理積なら1000)
            for(int j = 1; j <= A[i]; j++){
                if((bits >> (x[i][j] - 1) & 1) xor y[i][j]) ok = false; // 仮定したやつと違う（xor = 1）ならfalseに
            }
        }
        if(ok) ans = max(ans, counter(bits));
    }
    cout << ans << endl;
    return;
}


signed main(void){
    solve();
    return 0;
}