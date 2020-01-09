#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    long double n, k; cin >> n >> k;
    vector<ll> len(n);
    REP(i, n){
        int j = i + 1;
        int count = 0;
        while (true)
        {   
            count++;
            if(j >= k) break;
            else j *= 2;
        }
        len[i] = count;
    }

    long double ans = 0, a = 1 / n;
    REP(i, n){
        long double preans = 0.5;
        REP(j, len[i] - 1) preans *= 0.5; 
        ans += (1 / n) * preans;
    }
    cout << setprecision(10) << ans * 2 << endl;
}