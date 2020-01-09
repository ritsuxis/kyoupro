#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    map<string, int> mp;
    int N; cin >> N;

    REP(i, N){
        string s; cin >> s;
        if(mp.count(s)){
            int tmp = mp.at(s) + 1;
            mp.erase(s);
            mp.insert(make_pair(s, tmp));
        }
        else{
            mp.insert(make_pair(s, 1));
        }
    }

    int M; cin >> M;
    REP(i, M){
        string s; cin >> s;
        if(mp.count(s)){
            int tmp = mp.at(s) - 1;
            mp.erase(s);
            mp.insert(make_pair(s, tmp));
        }
        else{
            mp.insert(make_pair(s, 1));
        }
    }

    int res = 0;
    for(auto itr = mp.begin(); itr != mp.end(); ++itr){
        res = max(itr -> second, res);
    }
    cout << res << endl;

}