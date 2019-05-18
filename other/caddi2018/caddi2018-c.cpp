#include <bits/stdc++.h>
using namespace std;

int main (void){
    long long int n, p, ans; /* 長いからlonglong使ってる */
    ans = 1;
    cin >> n >> p;
    if (n == 1){
        cout << p << endl;
        return 0;
    }
    /* 素因数分解の範囲にrootは常套手段 */
    for (long long int i = 2; i*i <= p; i++){
        int cnt = 0;
        while (p % i == 0){
            cnt++;
            p /= i;
            /* n回割れたらそれは公約数に入る */
            if (cnt == n){
                ans *= i;
                cnt = 0; /*2n回とか割れる数用 */
            }
        }
    }
    cout << ans << endl;
}

