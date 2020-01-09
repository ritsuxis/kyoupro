#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    while (true){   
        string s; getline(cin, s);
        if(s.size() == 1 and s[0] == '.') return 0;
        else{
            vector<bool> left(0), right(0);
            REP(i, s.size()){
                if(s[i] == '(') left.push_back(1);
                else if(s[i] == '[') left.push_back(0);

                if(s[s.size() - i - 1] == ')') right.push_back(1);
                else if(s[s.size() - i - 1] == ']') right.push_back(0);
            }
            if(left.size() != right.size()) cout << "no" << endl;
            else{
                bool ok = true;
                REP(i, left.size()){
                    if(left[i] != right[i]) ok = false;
                }
                if(ok) cout << "yes" << endl;
                else cout << "no" << endl;
            }
        }
    }
    
}