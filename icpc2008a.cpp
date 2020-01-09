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
        else{
            vector<int> TaroCard(taro), HanakoCard(hanako);
            REP(i, taro) cin >> TaroCard[i];
            REP(i, hanako) cin >> HanakoCard[i];
            vector<int> TaroLeft(taro), TaroRight(taro), HanakoLeft(hanako), HanakoRight(hanako);
            REP(i, taro){ // 左からの累積和と右からの累積和をあらかじめ作る
                if(i == 0){
                    TaroLeft[i] = TaroCard[0];
                    TaroRight[i] = TaroCard[taro - 1];
                }
                else{
                    TaroLeft[i] = TaroLeft[i - 1] + TaroCard[i];
                    TaroRight[i] = TaroRight[i - 1] + TaroCard[taro - i - 1];
                }
            }
            REP(i, hanako){
                if(i == 0){
                    HanakoLeft[i] = HanakoCard[0];
                    HanakoRight[i] = HanakoCard[hanako - 1];
                }
                else{
                    HanakoLeft[i] = HanakoLeft[i - 1] + HanakoCard[i];
                    HanakoRight[i] = HanakoRight[i - 1] + HanakoCard[hanako - i - 1];
                }
            }

            pair<int, int> ans; ans = make_pair(INF, INF);
            REP(i, taro){
                REP(j, hanako){
                    if(i == 0){
                        if(j == 0){
                            if(TaroRight[taro - 2] + HanakoCard[0] == HanakoRight[hanako - 2] + TaroCard[0]){
                                ans = (ans.first + ans.second > TaroCard[i] + HanakoCard[j] ? make_pair(TaroCard[i], HanakoCard[j]) : make_pair(ans.first, ans.second));
                            }
                        }
                        else if(j == hanako - 1){
                            if(TaroRight[taro - 2] + HanakoCard[j] == HanakoLeft[hanako - 2] + TaroCard[i]){
                                ans = (ans.first + ans.second > TaroCard[i] + HanakoCard[j] ? make_pair(TaroCard[i], HanakoCard[j]) : make_pair(ans.first, ans.second));
                            }
                        }
                        else{
                            if(TaroRight[taro - 2] + HanakoCard[j] == HanakoLeft[j - 1] + HanakoRight[hanako - j - 2] + TaroCard[i]){
                                ans = (ans.first + ans.second > TaroCard[i] + HanakoCard[j] ? make_pair(TaroCard[i], HanakoCard[j]) : make_pair(ans.first, ans.second));
                            }
                        }
                    }
                    else if(i == taro - 1){
                        if(j == 0){
                            if(TaroLeft[taro - 2] + HanakoCard[0] == HanakoRight[hanako - 2] + TaroCard[i]){
                                ans = (ans.first + ans.second > TaroCard[i] + HanakoCard[j] ? make_pair(TaroCard[i], HanakoCard[j]) : make_pair(ans.first, ans.second));
                            }
                        }
                        else if(j == hanako - 1){
                            if(TaroLeft[taro - 2] + HanakoCard[j] == HanakoLeft[hanako - 2] + TaroCard[i]){
                                ans = (ans.first + ans.second > TaroCard[i] + HanakoCard[j] ? make_pair(TaroCard[i], HanakoCard[j]) : make_pair(ans.first, ans.second));
                            }
                        }
                        else{
                            if(TaroLeft[taro - 2] + HanakoCard[j] == HanakoLeft[j - 1] + HanakoRight[hanako - j - 2] + TaroCard[i]){
                                ans = (ans.first + ans.second > TaroCard[i] + HanakoCard[j] ? make_pair(TaroCard[i], HanakoCard[j]) : make_pair(ans.first, ans.second));
                            }
                        }
                    }
                    else{
                        if(j == 0){
                            if(TaroLeft[i - 1] + HanakoCard[j] + TaroRight[taro - i - 2] == HanakoRight[hanako - 2] + TaroCard[i]){
                                ans = (ans.first + ans.second > TaroCard[i] + HanakoCard[j] ? make_pair(TaroCard[i], HanakoCard[j]) : make_pair(ans.first, ans.second));
                            }
                        }
                        else if(j == hanako - 1){
                            if(TaroLeft[i - 1] + HanakoCard[j] + TaroRight[taro - i - 2] == HanakoLeft[hanako - 2] + TaroCard[i]){
                                ans = (ans.first + ans.second > TaroCard[i] + HanakoCard[j] ? make_pair(TaroCard[i], HanakoCard[j]) : make_pair(ans.first, ans.second));
                            }
                        }
                        else{
                            if(TaroLeft[i - 1] + HanakoCard[j] + TaroRight[taro - i - 2] == HanakoLeft[j - 1] + HanakoRight[hanako - j - 2] + TaroCard[i]){
                                ans = (ans.first + ans.second > TaroCard[i] + HanakoCard[j] ? make_pair(TaroCard[i], HanakoCard[j]) : make_pair(ans.first, ans.second));
                            }
                        }

                    }
                }
            }
            if(ans.first == INF and ans.second == INF) cout << -1 << endl;
            else cout << ans.first << " " << ans.second << endl;
        }
    }
}