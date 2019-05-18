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
    int n, t, a, h, ans;
    double tmp = 100000;
    cin >> n >> t >> a;
    for(int i = 0; i < n; i++) {
        cin >> h;
        if(tmp > abs(a - (t - h * 0.006))){
            tmp = abs(a - (t - h * 0.006));
            ans = i + 1;
        }
    }
    cout << ans << endl;

}