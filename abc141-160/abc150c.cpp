#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    vector<int> num(n);
    REP(i, n) num[i] = i + 1;
    vector<int> fst, sec;
    REP(i, n){
        int tmp; cin >> tmp;
        fst.push_back(tmp);
    }
    REP(i, n){
        int tmp; cin >> tmp;
        sec.push_back(tmp);
    }
    int a = 0, b = 0;
    int cnt = 1;
    while(whole(next_permutation, num)){
        if(num == fst) a = cnt;
        if(num == sec) b = cnt;
        cnt++;
    }
    cout << abs(a - b) << endl;
}