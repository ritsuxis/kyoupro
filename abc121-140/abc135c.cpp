#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    ll count = 0;
    vector<int> enemy(n + 1), hero(n);
    REP(i, n + 1) cin >> enemy[i];
    REP(i, n) cin >> hero[i];
    REP(i, n){
        if(hero[i] >= enemy[i]){
            int next = hero[i] - enemy[i];
            if(enemy[i + 1] >= next){
                enemy[i + 1] -= next;
                count += hero[i];
            }
            else{
                count += enemy[i] + enemy[i + 1];
                enemy[i + 1] = 0;
            }
        }
        else count += hero[i];
    }
    cout << count << endl;
}