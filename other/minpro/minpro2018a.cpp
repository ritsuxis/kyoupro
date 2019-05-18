#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ALL(obj) (obj).begin(), (obj).end() //イテレータの簡略化（コンテナじゃないと使えない）
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 100100100;


int main(void){
    string yah;
    cin >> yah;
    if(yah[0] == 'y' && yah[1] == 'a' && yah[2] == 'h' && yah[3] == yah[4]) cout << "YES" << endl;
    else cout << "NO" << endl;
}