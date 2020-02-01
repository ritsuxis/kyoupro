#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;
const int MOD = 1000000007; // 計算してからmodで割る ans = (ans * a) % mod
#define int long long
template <typename T = long long > T in () { T x; cin >> x; return(x);}
// int a = in() のように使うlong long以外の型の時はstirng s = in<string>()のように型を指定する

signed main(void){
    string cardA = in<string>(), cardB = in<string>(), cardC = in<string>();
    int A_now = 0, B_now = 0, C_now = 0;
    char next = 'a', winner;

    while (true){
        if(next == 'a'){
            if(A_now == cardA.size()){
                winner = 'A';
                break;
            }
            next = cardA[A_now];
            A_now++;
        }else if(next == 'b'){
            if(B_now == cardB.size()){
                winner = 'B';
                break;
            }
            next = cardB[B_now];
            B_now++;
        }else if(next == 'c'){
            if(C_now == cardC.size()){
                winner = 'C';
                break;
            }
            next = cardC[C_now];
            C_now++;
        }else{
            cout << "error" << endl;
            break;
        }
    }
    
    cout << winner << endl;
    
}