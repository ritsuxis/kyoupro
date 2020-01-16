#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

/* 1の時はずっと1だが、それ以外の数は5000兆日たつととんでもなく大きい数字になる
   2でさえ、5000兆日たてば 5000兆 * log2(= 0.3) = 1500兆桁になるため10^18乗桁を優に超す
   よって、1文字目から1が続く回数を数え、その回数が桁数Kを越えれば1を、そうでなければ1以外で
   初めて出てきた数字を返す
*/
int main(void){
    string s; cin >> s;
    ll b; cin >> b;
    ll count = 0, i = 0;
    while (s[i] == '1'){
        count++;
        i++;
    }
    if(b > count) cout << s[i] << endl;
    else cout << 1 << endl;
}