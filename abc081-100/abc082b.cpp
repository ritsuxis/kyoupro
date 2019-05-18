#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int abc(char a){
    char alpa[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    REP(i, 26) if(a == alpa[i]) return i + 1;
}

bool sameNumber(int a, vector<int> b){
    REP(i, b.size()) if(a != b[i]) return 0;
    return 1;
}

int main(void){
    string s, t; cin >> s >> t;
    int numS = s.size(), numT = t.size();
    vector<int> intS(numS), intT(numT);
    REP(i, numS) intS[i] = abc(s[i]);
    whole(sort, intS);
    REP(i, numT) intT[i] = abc(t[i]);
    whole(sort, intT);
    bool flag = 0;
    int minS = intS[0];
    REP(i, numT) if(minS < intT[i]) flag = 1;
    if(flag == 0 and sameNumber(minS, intT)) flag = (intS.size() < intT.size() ? 1 : 0);
    cout << (flag ? "Yes" : "No") << endl;
}