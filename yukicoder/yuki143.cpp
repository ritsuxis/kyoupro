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
    int k, n, f, h;
    cin >> k >> n >> f;
    int ans = k * n;
    for (int i = 0; i < f; i++){
        cin >> h;
        ans -= h;
    }
    if (ans < 0) cout << "-1" << endl;
    else  cout << ans << endl;

}