#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n, a, b, c, d; cin >> n >> a >> b >> c >> d;
    string s; cin >> s;
    int count = 0;
    vector<int> A(0);
    
    int countR = 0;
    FOR(i, a, c){
        if(s[i] == '#'){
            countR++;
        }
        else countR = 0;

        if(countR >= 2){
            cout << "No" << endl;
            return 0;
        }
    }
    countR = 0;
    FOR(i, b, d){
        if(s[i] == '#'){
            countR++;
        }
        else countR = 0;

        if(countR >= 2){
            cout << "No" << endl;
            return 0;
        }
    }
    FOR(i, b - 2, d + 2) {
        if(s[i] == '.'){
            count++;
        }
        else{
            A.push_back(count);
            count = 0;
        }
    }
    whole(sort, A, greater<>());
    if(c < d) cout << "Yes" << endl;
    else{
        if(A[0] >= 3) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}