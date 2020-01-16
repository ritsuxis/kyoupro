#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    while(true){
        int n, p; cin >> n >> p;
        if(n == 0 and p == 0) return 0;
        else{
            vector<int> person(n, 0);
            int turn = 0, cup = p; // turnは今誰のターンか示す, cupは椀の中に入っている小石の個数
            while(true){
                if(cup != 0){ //cupに小石がある時
                    person[turn]++;
                    cup--;
                }
                else if(person[turn] != 0){ //小石を持っているとき
                    cup += person[turn];
                    
                    person[turn] = 0;
                }

                if(person[turn] == p) break;
                turn++;
                if(turn == n) turn = 0;
            }
            cout << turn << endl;
        }
    }
}