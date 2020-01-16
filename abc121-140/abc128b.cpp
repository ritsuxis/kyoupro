#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

bool compare_by_A(pair<string, int> a, pair<string, int> b){
    if(a.first == b.first) return a.second > b.second;
    else return a.first < b.first;
}

int main(void){
    int n;
    cin >> n;
    vector<pair<string, int>> A(n), B(n);
    REP(i, n) {
        cin >> A[i].first >> A[i].second;
        B[i].first = A[i].first;
        B[i].second = A[i].second;
    }
    whole(sort, A, compare_by_A);
    REP(i, n){
        REP(j, n){
            if(A[i].first == B[j].first && A[i].second == B[j].second) cout << j + 1 << endl;
        }
    }
}