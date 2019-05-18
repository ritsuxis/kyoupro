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
    int a, b, ans = 0;
    cin >> a >> b;
    if(b % a == 0) ans = b / a;
    else ans = b / a + 1;
    cout << ans << endl; 

}