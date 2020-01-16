#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    while(true){
        int n; cin >> n;
        if(n == 0) return 0;
        else{
            vector<char> A(n);
            vector<pair<char, int>> ans(0);
            bool ok = false;
            pair<char, int> out;
            REP(i, n) cin >> A[i];
            REP(i, n){
                bool fd = false;
                REP(j, ans.size()){
                    if(A[i] == ans[j].first){
                        ans[j].second++;
                        fd = true;
                        if(ans[j].second > n/ 2){
                            ok = true;
                            out = make_pair(ans[j].first, i);
                        }
                        break;
                    }
                }
                if(fd != true){
                    ans.push_back(make_pair(A[i], 0));
                }
                if(ok) break;
            }
            if(ok) cout << out.first << " " << out.second << endl;
            else{
                bool tie = true;
                out = make_pair('A', 0);
                REP(i, ans.size()){
                    if(ans[0].second != ans[i].second) tie = false;
                    if(out.second < ans[i].second) out = make_pair(ans[i].first, ans[i].second);
                }
                if(tie) cout << "TIE" << endl;
                else cout << out.first << " " << out.second << endl;
            }
        }
    }
}