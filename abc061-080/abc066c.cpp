#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    vector<int> num(n), inp(n);
    int end = n - 1, start = 0;
    REP(i, n) cin >> inp[i];
    REP(i, n){
        if(i % 2 == 0){
            num[start] = inp[n - 1 - i];
            start++;
        }
        else{
            num[end] = inp[n - 1 - i];
            end--;
        }
    }

    REP(i, n){
        if(i != 0) cout << " ";
        cout << num[i];
    }
    cout << endl;
}