#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int medi_left, medi_right, n; cin >> n;
    vector<int> num(n), original(n);
    REP(i, n){
        cin >> num[i];
        original[i] = num[i];
    }
    whole(sort, num);
    medi_left = num[n / 2 - 1];
    medi_right = num[n / 2];
    REP(i, n){
        if(original[i] < num[n / 2]) cout << medi_right << endl;
        else cout << medi_left << endl;
    }
}