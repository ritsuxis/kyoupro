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
            vector<string> s(n);
            vector<int> A(n);
            REP(i, n) cin >> s[i];
            REP(i, n) A[i] = s[i].size();
            int ans;
            bool ok = false;
            REP(i, n + 1){
                int a = 0;
                bool tanka =  false;
                int now = 0; 
                FOR(j, i, A.size()){
                    a += A[j];
                    if(a > 7) break;
                    if((now == 0 or now == 2) and a == 5){
                        now++;
                        a = 0;
                    }
                    if((now == 1 or now == 3) and a == 7){
                        now++;
                        a = 0;
                    }
                    if(now == 4 and a == 7){
                        ok = true;
                        ans = i + 1;
                        break;
                    }
                }
                if(ok) break;
            }
            cout << ans << endl;
        }
    }
}