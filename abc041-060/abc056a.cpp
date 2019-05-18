#include<bits/stdc++.h>

using namespace std;

int main(void){
    char a, b;
    cin >> a >> b;
    if (a == 'H') cout << b << endl;
    if (a == 'D'){
        if (b == 'H') cout << 'D' << endl;
        else cout << 'H' << endl;
    }
}