#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    vector<bool> num(n);
    int loss = 0, many = 0;
    REP(i, n){
        int tmp;
        cin >> tmp;
        if(!num[tmp - 1]) num[tmp - 1] = true;
        else many = tmp;
    }
    REP(i, n) if(!num[i]) loss = i + 1;
    if(loss == 0 and many == 0) cout << "Correct" << endl;
    else cout << many << " " << loss << endl;
}