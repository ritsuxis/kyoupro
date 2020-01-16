#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    while(true){
        int taro, hanako; cin >> taro >> hanako;
        if(taro == 0 and hanako == 0) return 0;
        else {
            vector<int> TaroCard(taro), HanakoCard(hanako);
            int taroSum = 0, hanakoSum = 0;
            REP(i, taro){
                cin >> TaroCard[i];
                taroSum += TaroCard[i];
            }
            REP(i , hanako){
                cin >> HanakoCard[i];
                hanakoSum += HanakoCard[i];
            }
            bool flag = false;
            pair<int, int> ans = make_pair(INF, INF);
            REP(i, taro){
                REP(j, hanako){
                    if(taroSum - TaroCard[i] + HanakoCard[j] == hanakoSum - HanakoCard[j] + TaroCard[i] 
                    and ans.first + ans.second > TaroCard[i] + HanakoCard[j]){
                        flag = true;
                        ans = make_pair(TaroCard[i], HanakoCard[j]);
                    }
                }
            }
            if(flag) cout << ans.first << " " << ans.second << endl;
            else cout << -1 << endl;
        }
    }
}