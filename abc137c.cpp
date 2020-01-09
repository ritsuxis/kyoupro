#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

// ソートして同じ奴nC2
int main(void){
    int n; cin >> n;
    vector<string> Ana(0);
    vector<ll> num(0);
    REP(i, n){
        string s; cin >> s;
        whole(sort, s);
        bool flag = false;
        REP(k, Ana.size()){
            if(Ana[k] == s){
                num[k]++;
                flag = true;
                break;
            }
        }
        if(!flag){
            Ana.push_back(s);
            num.push_back(1);
        }
    }


    ll ans = 0;
    REP(i, num.size()){
        ans += (num[i] * (num[i] - 1)) / 2;
    }
    cout << ans << endl;
}