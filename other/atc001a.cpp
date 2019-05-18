#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int h, w;
char A[500][500 + 1];
bool reached[500][500 + 1];


// 塗り絵との違いは元居た場所(分岐点)に戻ることがあるかどうか
void dfs(int y, int x){
    // 塀にあたるか範囲の外に出たら何もしない
    if(x < 0 or w <= x or y < 0 or h <= y or A[y][x] == '#') return ;
    // 以前訪れていたら何もしない
    if(reached[y][x]) return ;

    reached[y][x] = true; // 到達した

    dfs(y + 1, x + 0);
    dfs(y + 0, x + 1);
    dfs(y - 1, x + 0);
    dfs(y + 0, x - 1);
    return ;
}

int main(void){
    cin >> h >> w;
    int startX, startY, goalX, goalY;
    REP(i, h){
        REP(j, w){
            cin >> A[i][j];
            if(A[i][j] == 's'){
                startX = j;
                startY = i;
            }
            else if(A[i][j] == 'g'){
                goalY = i;
                goalX = j;
            }
        }
    }
    dfs(startY, startX);
    cout << (reached[goalY][goalX] ? "Yes" : "No") << endl;
}