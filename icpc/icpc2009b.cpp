#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;
int n, m;
char W[100][100];

void dfs(int y, int x){
    W[y][x] = '0';
    for(int dx = -1; dx <= 1; dx++){
        for(int dy = -1; dy <= 1; dy++){
            int nx = dx + x;
            int ny = dy + y;
            if(W[ny][nx] == '1' and 0 <= nx and nx < n and 0 <= ny and ny < m) dfs(ny, nx);
        }
    }
    return ;
}

int main(void){
    while(true){
        cin >> n >> m;
        if(n == 0 and m == 0) return 0;
        REP(i, m){
            REP(j, n){
                cin >> W[i][j];
            }
        }

        int ans = 0;
        REP(i, m){
            REP(j, n){
                if(W[i][j] == '1'){
                    dfs(i, j);
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}