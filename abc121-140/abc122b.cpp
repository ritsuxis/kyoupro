#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    string s; cin >> s;
    int n = s.size();
    int ans = 0, i = 0;
    while(i < n){
        int count = 0;
        while (s[i] == 'A' or s[i] == 'T' or s[i] == 'G' or s[i] == 'C'){
            count++;
            i++;
        }
        ans = max(ans, count);
        i++;
    }
    cout << ans << endl;
}