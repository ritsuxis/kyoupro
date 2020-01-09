#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    while(true){
        pair<int, int> n; cin >> n.first >> n.second;
        if(n.first == 0 and n.second == 0) return 0;
        else{
            vector<int> Card(n.first);
            int tmp = n.first;
            for(int i = 0; i < n.first; i++){
                Card[i] = tmp;
                tmp--;
            }
            REP(i, n.second){
                pair<int, int> cut; cin >> cut.first >> cut.second;
                vector<int> New(0);
                for(int i = cut.first - 1; i < cut.first + cut.second - 1; i++) New.push_back(Card[i]);
                REP(i, cut.first - 1) New.push_back(Card[i]);
                FOR(i, cut.first + cut.second - 1, n.first) New.push_back(Card[i]);
                REP(i, n.first) Card[i] = New[i];
            }
            cout << Card[0] << endl;
        }
    }
}