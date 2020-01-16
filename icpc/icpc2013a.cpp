#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    while(true){
        int h, w; cin >> h >> w;
        if(h == 0 and w == 0) return 0;
        else{
            int ansH = 0, ansW = 0;
            
            int sqMin = INF;
            int i, j;
            [&]{ // lumda式を使うことでループから楽に抜けられる
                for(int i = 0; j * j + i * i <= w * w + h * h; i++){ // ここ多分whileでもっとかっこよく書ける
                    for(int j = i + 1; j * j + i * i <= w * w + h * h; j++){ // j = i + 1にすることで正方形を回避
                        int men = (i + 1) * (i + 1) + (j + 1) * (j + 1);
                        if(i + 1 == h and j + 1 == w) continue; // 元の長方形と同じ奴はダメ
                        if(men == h * h + w * w and (i + 1) > h){ // 面積が同じ時、元の長方形よりもheightは高い必要がある
                            ansH = i + 1;
                            ansW = j + 1;
                            return ;
                        }
                        else if(men > h * h + w * w and sqMin > men){ // いままでに計算してきたやつより面積が小さいか
                            sqMin = men;
                            ansH = i + 1;
                            ansW = j + 1;
                        }
                    }
                }
            }();
            cout << ansH << " " << ansW << endl;
            
        }
    }
}