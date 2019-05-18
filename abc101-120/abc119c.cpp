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
    int n, a, b, c, ans = 0;
    cin >> n >> a >> b >> c;
    vector<int> D(n);
    for(int i = 0; i < n; i++) cin >> D[i];
    sort(D.begin(), D.end());
    if (D[0] > c) ans += abs(D[0] - c);
    else if (D[0] <= c) {
        
    }
}