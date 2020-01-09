#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

/* gcdではどこから計算しても結果が変わらない特性がある（結合則）
   これを利用して、左からのgcdと右からのgcdをあらかじめ求めておき、抜く数字の前後までのgcd同士でまたgcdする
*/

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
    int n; 
    cin >> n;
    vector<int> A(n), left(n), right(n);
    REP(i, n) cin >> A[i];
    int ans = 0;
    left[0] = A[0];
    right[0] = A[n - 1];
    FOR(i, 1, n){
        left[i] = gcd(left[i - 1], A[i]);
        right[i] = gcd(right[i - 1], A[n - 1 - i]);
    }
    REP(i, n){
        if(i == 0) ans = max(ans, right[n - 2]);
        else if(i == n - 1) ans = max(ans, left[n - 2]);
        else ans = max(ans, gcd(left[i - 1], right[n - i - 2]));
    }
    cout << ans << endl;

}