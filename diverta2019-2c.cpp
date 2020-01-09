#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    vector<int> mai(0), pra(0);
    REP(i, n){
        int j; cin >> j;
        if(j >= 0) pra.push_back(j);
        else mai.push_back(j);
    }
    if(mai.size() == 0 or pra.size() == 0){
        // hoge
    }
    else{
        int i = 0, j = 0;
        while(true){
            
        }
    }
}