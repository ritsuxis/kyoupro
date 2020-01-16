#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

bool road[1000][1000];
int memo[1000][1000]; 
int h, w, cost;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

int main(void){
    cin >> h >> w >> cost;
    REP(i, 1000) REP(j, 1000) memo[i][j] = INF;
    REP(i, h){
        REP(j, w) cin >> road[i][j];
    }
    memo[0][0] = 0;
    REP(i, h){
        REP(j ,w){
            if(road[i][j]) memo[i][j]++;
            if(i + 1 < h) chmin(memo[i + 1][j], memo[i][j]);
            if(j + 1 < w) chmin(memo[i][j + 1], memo[i][j]);
        }
    }
    cout << memo[h - 1][w - 1] * cost << endl;
}