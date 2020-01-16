#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int num; cin >> num;
    for(int n; n < num; n++){
        string number; cin >> number;
        REP(i, number.size()){
            char out;
            int kai = 0;
            if(number[i] == '1'){
                while(number[i] != '0'){
                    kai++;
                    if(kai == 6) kai = 1;
                    if(kai == 1) out = '.';
                    else if(kai == 2) out = ',';
                    else if(kai == 3) out = '!';
                    else if(kai == 4) out = '?';
                    else if(kai == 5) out = ' ';
                    i++;
                }
                cout << out;
            }
            if(number[i] == '2'){
                while(number[i] != '0'){
                    kai++;
                    if(kai == 4) kai = 1;
                    if(kai == 1) out = 'a';
                    else if(kai == 2) out = 'b';
                    else if(kai == 3) out = 'c';
                    i++;
                }
                cout << out;
            }
            if(number[i] == '3'){
                while(number[i] != '0'){
                    kai++;
                    if(kai == 4) kai = 1;
                    if(kai == 1) out = 'd';
                    else if(kai == 2) out = 'e';
                    else if(kai == 3) out = 'f';
                    i++;
                }
                cout << out;
            }
            if(number[i] == '4'){
                while(number[i] != '0'){
                    kai++;
                    if(kai == 4) kai = 1;
                    if(kai == 1) out = 'g';
                    else if(kai == 2) out = 'h';
                    else if(kai == 3) out = 'i';
                    i++;
                }
                cout << out;
            }
            if(number[i] == '5'){
                while(number[i] != '0'){
                    kai++;
                    if(kai == 4) kai = 1;
                    if(kai == 1) out = 'j';
                    else if(kai == 2) out = 'k';
                    else if(kai == 3) out = 'l';
                    i++;
                }
                cout << out;
            }
            if(number[i] == '6'){
                while(number[i] != '0'){
                    kai++;
                    if(kai == 4) kai = 1;
                    if(kai == 1) out = 'm';
                    else if(kai == 2) out = 'n';
                    else if(kai == 3) out = 'o';
                    i++;
                }
                cout << out;
            }
            if(number[i] == '7'){
                while(number[i] != '0'){
                    kai++;
                    if(kai == 5) kai = 1;
                    if(kai == 1) out = 'p';
                    else if(kai == 2) out = 'q';
                    else if(kai == 3) out = 'r';
                    else if(kai == 4) out = 's';
                    i++;
                }
                cout << out;
            }
            if(number[i] == '8'){
                while(number[i] != '0'){
                    kai++;
                    if(kai == 4) kai = 1;
                    if(kai == 1) out = 't';
                    else if(kai == 2) out = 'u';
                    else if(kai == 3) out = 'v';
                    i++;
                }
                cout << out;
            }
            if(number[i] == '9'){
                while(number[i] != '0'){
                    kai++;
                    if(kai == 5) kai = 1;
                    if(kai == 1) out = 'w';
                    else if(kai == 2) out = 'x';
                    else if(kai == 3) out = 'y';
                    else if(kai == 4) out = 'z';
                    i++;
                }
                cout << out;
            }
        }
        cout << endl;
    }
}