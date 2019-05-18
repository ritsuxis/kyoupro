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
    int a;
    bool ans = false;
    cin >> a;
    if (a == 2) ans = true;
    cin >> a;
    if (a == 2) ans = true;
    if (ans == true) cout << "No" << endl;
    else cout  << "Yes" << endl;
}