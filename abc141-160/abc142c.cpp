#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int N; cin >> N;
    vector<pair<int, int>> student(N);
    REP(i, N){
        cin >> student[i].first;
        student[i].second = i + 1;
    }
    whole(sort, student);
    REP(i, N){
        if(i != 0) cout << " ";
        cout << student[i].second;
    }
    cout << endl;
}