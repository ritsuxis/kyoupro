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
    int n;
    cin >> n;
    long double ans = 0, otoshidama;
    string unit;
    for (int i = 0; i < n; i++){
        cin >> otoshidama >> unit;
        if(unit == "BTC") ans += 380000.0 * otoshidama;
        else ans += otoshidama; 
    }
    cout << ans << endl;

}