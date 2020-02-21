#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;
const double PI = 3.1415926535;
const int MOD = 1000000007; // 計算してからmodで割る ans = (ans * a) % mod
#define int long long
template <typename T = long long > T in () { T x; cin >> x; return(x);}
// int a = in() のように使うlong long以外の型の時はstirng s = in<string>()のように型を指定する

signed main(void){
    int n = in();
    string s; cin >> s;

    char number[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    vector<string> num;
    int ans = 0;

    REP(i, 10){
        REP(j, 10){
            REP(k, 10){
                string tmp = {number[i], number[j], number[k]};
                num.push_back(tmp);
            }
        }
    }

    REP(i, num.size()){
        int j = 0, now = 0;
        while(j < s.size()){
            if(num[i][now] == s[j]){
                now++;
                if(now == 3){
                    ans++;
                    break;
                }
            }
            j++;
        }
    }
    cout << ans << endl;
}