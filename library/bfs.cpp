#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
#define REP(i, n) for (int i = 0; i < n ; i++)
/* 4 方向への隣接頂点への移動を表すベクトル */
const int dx[6] = { 1, 0, -1, 0, -1, 1 };
const int dy[6] = { 0, 1, 0, -1, 1, 1 };


int main() {

    ////////////////////////////////////////
    /* 入力受け取り */
    ////////////////////////////////////////

    /* 縦と横の長さ */
    int height = 510, width = 510;

    /* 盤面 */
    // vector<string> field(height);
    // for (int h = 0; h < height; ++h) cin >> field[h];
    bool grid[510][510]; // 障害物の位置及びゴールは-250~250以内 // startはgrid[255][255] // 全てに255の下駄を履かせる

    int geta = 510 / 2;
    REP(i, 510){
        REP(j, 510){
            grid[i][j] = true;
        }
    }
    int n; cin >> n;
    int goal_x, goal_y; cin >> goal_x >> goal_y;

    REP(i, n){
        int a, b; cin >> a >> b;
        // 障害物のあるgridをfalseとする
        grid[a + geta][b + geta] = false;
    }

    /* スタート地点とゴール地点 */

    int sx = 255, sy = 255, gx = goal_x + geta, gy = goal_y + geta;


    ////////////////////////////////////////
    /* 幅優先探索の初期設定 */
    ////////////////////////////////////////

    // 各セルの最短距離 (訪れていないところは -1 としておく)
    vector<vector<int> > dist(height, vector<int>(width, -1)); 
    dist[sx][sy] = 0; // スタートを 0 に

    // 探索中に各マスはどのマスから来たのかを表す配列 (最短経路長を知るだけなら、これは不要)
    // vector<vector<int> > prev_x(height, vector<int>(width, -1));
    // vector<vector<int> > prev_y(height, vector<int>(width, -1));

    // 「一度見た頂点」のうち「まだ訪れていない頂点」を表すキュー
    queue<pair<int, int> > que; 
    que.push(make_pair(sx, sy)); // スタートを push


    ////////////////////////////////////////
    /* 幅優先探索を実施 */
    ////////////////////////////////////////    

    /* キューが空になるまで */
    while (!que.empty()) {
        pair<int, int> current_pos = que.front(); // キューの先頭を見る (C++ ではこれをしても pop しない)
        int x = current_pos.first;
        int y = current_pos.second;
        que.pop(); // キューから pop を忘れずに

        // 隣接頂点を探索
        for (int direction = 0; direction < 6; ++direction) {
            int next_x = x + dx[direction];
            int next_y = y + dy[direction];
            if (next_x < 0 || next_x >= height || next_y < 0 || next_y >= width) continue; // 場外アウトならダメ
            if (grid[next_x][next_y] == false) continue; // 壁はダメ

            // まだ見ていない頂点なら push
            if (dist[next_x][next_y] == -1) {
                que.push(make_pair(next_x, next_y));
                dist[next_x][next_y] = dist[x][y] + 1; // (next_x, next_y) の距離も更新
                // prev_x[next_x][next_y] = x;  // どの頂点から情報が伝播して来たか、縦方向の座標をメモ
                // prev_y[next_x][next_y] = y;  // どの頂点から情報が伝播して来たか、横方向の座標をメモ
            }
        }
    }


    ////////////////////////////////////////
    /* 結果出力 */
    ////////////////////////////////////////    

    int x = gx, y = gy;
    cout << dist[gx][gy] << endl;
    /*
    while (x != -1 && y != -1) {
        field[x][y] = 'o'; // 通過したことを示す

        // 前の頂点へ行く
        int px = prev_x[x][y];
        int py = prev_y[x][y];
        x = px, y = py;
    }
    for (int h = 0; h < height; ++h) {
        for (int w = 0; w < width; ++w) {
            cout << std::setw(3) << field[h][w];
        }
        cout << endl;
    }
    */
}