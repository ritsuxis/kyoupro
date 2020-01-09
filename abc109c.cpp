#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

// 最大公約数
int gcd(int a, int b){
    int c;
    if (a < b) {
        a+=b; b=a-b; a-=b;
    }
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(void){
    int n, x; cin >> n >> x;
    vector<int> A(n);
    REP(i, n) cin >> A[i];
    whole(sort, A);
    int ans = 0; // gcdの引数の片方が0の時、その値はもう一つの引数の値となる
    REP(i, n){
        ans = gcd(ans, abs(A[i] - x));
    }
    cout << ans << endl;
}
/* 今回、初めはA[i - 1] - A[i] で求めようとしていたが、この方法だと
   例えば[1, 3, 6, 8]のセットの時に答えが2となってしまう（本当は 1） */