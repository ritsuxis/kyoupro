#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ALL(obj) (obj).begin(), (obj).end() //イテレータの簡略化（コンテナじゃないと使えない）
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 100100100;


int main(void){
    int  n;
    cin >> n;
    int sqn = sqrt(n), ans = n;
    for(int i = 1; i <= sqn; i++){
        int preans = 0;
        for(int j = 1; i * j <= n; j++){
            preans = (n - i * j) + abs(i - j);
            ans = preans < ans ? preans : ans;
        }
    }
    cout << ans << endl;
}