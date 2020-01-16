#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    string s; cin >> s;
    vector<string> dec(0);
    int start = 0;
    bool flag = false;
    REP(i, s.size()){
        if(!flag and s[i] <= 90){
            start = i;
            flag = true;
        }
        else if (flag and s[i] <= 90){
            dec.push_back(s.substr(start, i - start + 1));
            flag = false;
        }
    }
    whole(sort, dec, [](string a, string b) {REP(i, a.size()) a[i] = tolower(a[i]); REP(i, b.size()) b[i] = tolower(b[i]); return a < b;});
    REP(i, dec.size()) cout << dec[i];
    cout << endl;
}