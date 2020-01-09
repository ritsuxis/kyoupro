#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int N; cin >> N;
    map<string, int> mp;

    REP(i, N){
        string s; cin >> s;
        if(mp.find(s) == mp.end()){
            mp.emplace(s, 1);
        }
        else mp[s]++;
    }
    pair<string, int> res = make_pair("winner", 0);
    for(auto itr = mp.begin(); itr != mp.end(); ++itr){
        if(itr->second > res.second) res = make_pair(itr->first, itr->second);
    }
    cout << res.first << endl;
}