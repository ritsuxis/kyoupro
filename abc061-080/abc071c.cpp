#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;


int main(void){
    int n; cin >> n;
    vector<int> bou(n);
    REP(i, n) cin >> bou[i];
    whole(sort, bou, greater<>());
    ll hen1 = 0, hen2 = 0, cnt = 0;
    REP(i, n){
        if(hen1 and hen2) break;
        else{
            if(cnt == 0) cnt++;
            else if(cnt == 1){
                if(bou[i - 1] == bou[i]){
                    if(!hen1){
                        hen1 = bou[i];
                        cnt = 0;
                    }
                    else{
                        hen2 = bou[i];
                        break;
                    }
                }
            }
            else cnt = 0;
        }
    }

    cout << hen1 * hen2 << endl;
}