#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int N, K, Q; cin >> N >> K >> Q;
    int answer[100010];
    REP(i, 100010) answer[i] = K;
    REP(i, Q){
        int tmp; cin >> tmp;
        answer[tmp - 1]++;
    }
    REP(i, N){
        if(answer[i] - Q > 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }


}