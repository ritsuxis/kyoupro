#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    REP(o, n){
        string a, b; cin >> a >> b;
        int na = 0, nb = 0; 
        REP(i, a.size()){
            if(a[i] == 'm'){
                if(i != 0) na += 1000 * (a[i - 1] - '0');
                else na += 1000;
            } 
            if(a[i] == 'c'){
                if(i != 0 and (a[i - 1] != 'm')) na += 100 * (a[i - 1] - '0');
                else na += 100;
            }
            if(a[i] == 'x') {
                if(i != 0 and (a[i - 1] != 'm' and a[i - 1] != 'c')) na += 10 * (a[i - 1] - '0');
                else na += 10;
            }
            if(a[i] == 'i'){
                if(i != 0 and (a[i - 1] != 'm' and a[i - 1] != 'c' and a[i - 1] != 'x')) na += 1 * (a[i - 1] - '0');
                else na += 1;
            }
        }
        REP(i, b.size()){
            if(b[i] == 'm'){
                if(i != 0) nb += 1000 * (b[i - 1] - '0');
                else nb += 1000;
            } 
            if(b[i] == 'c'){
                if(i != 0 and (b[i - 1] != 'm')) nb += 100 * (b[i - 1] - '0');
                else nb += 100;
            }
            if(b[i] == 'x') {
                if(i != 0 and (b[i - 1] != 'm' and b[i - 1] != 'c')) nb += 10 * (b[i - 1] - '0');
                else nb += 10;
            }
            if(b[i] == 'i'){
                if(i != 0 and (b[i - 1] != 'm' and b[i - 1] != 'c' and b[i - 1] != 'x')) nb += 1 * (b[i - 1] - '0');
                else nb += 1;
            }
        }
        int nans = na + nb;
        string ans;
        if(nans / 1000 >= 2){
            ans += to_string(nans / 1000) + 'm';
            nans %= 1000;
        }
        else if(nans / 1000 == 1){
            ans += 'm';
            nans %= 1000;
        }

        if(nans / 100 >= 2){
            ans += to_string(nans / 100) + 'c';
            nans %= 100;
        }
        else if(nans / 100 == 1){
            ans += 'c';
            nans %= 100;
        }

        if(nans / 10 >= 2){
            ans += to_string(nans/ 10) + 'x';
            nans %= 10;
        }
        else if(nans / 10 == 1){
            ans += 'x';
            nans %= 10;
        }

        if(nans >= 2){
            ans += to_string(nans) + 'i';
        }
        else if(nans == 1) ans += 'i';

        cout << ans << endl;
    }
}