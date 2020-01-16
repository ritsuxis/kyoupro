#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int N; cin >> N;
    REP(i, N){
        int num[10] = {0};
        int card; cin >> card;
        REP(j, 4){
            num[card % 10]++;
            card /= 10;
        }
        int no = 0, one = 0, two = 0, three = 0, four = 0;
        REP(j, 10){
            if(num[j] == 1) no++;
            else if(num[j] == 4) four++;
            else if(num[j] == 3) three++;
            else if(num[j] == 2){
                one++;
                two++;
            }
        }
        if(four == 1) cout << "Four Card" << endl;
        else if(three == 1) cout << "Three Card" << endl;
        else if(two == 2) cout << "Two Pair" << endl;
        else if(one == 1) cout << "One Pair" << endl;
        else if(no == 4) cout << "No Pair" << endl;
    }
}