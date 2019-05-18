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
    int a, b, c;
    cin >> a >> b >> c;
    if(a==b && b==c) cout << "Yes" << endl;
    else cout << "No" << endl;
}