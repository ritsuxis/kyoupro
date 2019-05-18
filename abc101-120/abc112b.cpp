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
    int n, t, cost = 10000, tm, a, b;
    cin >> n >> t;
    bool ans = false;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(b <= t && a < cost){
            ans = true;
            cost = a;
        } 
    }
    if (ans) cout << cost << endl;
    else cout << "TLE" << endl;

}