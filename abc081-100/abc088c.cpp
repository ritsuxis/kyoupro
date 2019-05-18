#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int c;

    if (a < b) {
        a+=b; b=a-b; a-=b;
    }

    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

int main(void){
    vector<int> c(9);
    bool ans = 0;
    int a2, a3, b1, b2, b3;
    for(int i = 0; i < 9; i++) cin >> c[i];

    for(int a1 = 0; a1 <= c[0]; a1++){
        b1 = c[0] - a1;
        b2 = c[1] - a1;
        b3 = c[2] - a1;
        a2 = c[3] - b1;
        a3 = c[6] - b1;
        if(b1 >= 0 && b2 >= 0 && b3 >= 0 && a2 >= 0 && a3 >= 0 && a2 + b2 == c[4] && a2 + b3 == c[5] && a3 + b2 == c[7] && a3 + b3 == c[8]) ans = 1;
    }

    if(ans == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}