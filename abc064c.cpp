#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    bool hai = 0, tya = 0, midori = 0, mizu = 0, ao = 0, ki = 0, dai = 0, aka = 0;
    int saikyo = 0;

    REP(i, n){
        int rate; cin >> rate;
        if(rate <= 399) hai = 1;
        else if(rate <= 799) tya = 1;
        else if(rate <= 1199) midori = 1;
        else if(rate <= 1599) mizu = 1;
        else if(rate <= 1999) ao = 1;
        else if(rate <= 2399) ki = 1;
        else if(rate <= 2799) dai = 1;
        else if(rate <= 3199) aka = 1;
        else saikyo++;
    }

    int res = 0;
    if(hai) res++;
    if(tya) res++;
    if(midori) res++;
    if(mizu) res++;
    if(ao) res++;
    if(ki) res++;
    if(dai) res++;
    if(aka) res++;

    if(res != 0) cout << res << " " << res + saikyo << endl;
    else cout << 1 << " " << saikyo << endl; 
}