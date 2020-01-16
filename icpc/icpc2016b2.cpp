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
            REP(i, n) cin >> A[i];
            if(n == 1) cout << A[0] << " " << 1 << endl;
            else{
                vector<pair<int, char>> B(0);
                bool ok = false;
                pair<char, int> ans;
                REP(i, n){
                    bool fd = false;
                    REP(j, B.size()){
                        if(A[i] == B[j].second){
                            B[j].first++;
                            fd = true;
                            break;
                        }
                    }
                    if(fd != true){
                        B.push_back(make_pair(1, A[i]));
                    }
                    whole(sort, B, greater<>());
                    if(B.size() >= 2 and B[0].first > B[1].first + (n - (i + 1))){
                        ok = true;
                        ans = make_pair(B[0].second, i + 1);
                        break;
                    }
                    else if(B.size() == 1 and B[0].first > n / 2){
                        ok = true;
                        ans = make_pair(B[0].second, i + 1);
                        break;
                    }
                }
                if(ok) cout << ans.first << " " << ans.second << endl;
                else{
                    if(B[0].first == B[1].first) cout << "TIE" << endl;
                    else cout << B[0].second << " " << n << endl;
                }
            }       
        }
    }
}