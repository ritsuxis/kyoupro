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
    int k, l;
    cin >> k;
    l = k / 2;
    if (k % 2 == 1) cout << l * (l + 1) << endl;
    else cout << l * l << endl;  

}