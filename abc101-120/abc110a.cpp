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
    vector<int> n(3);
    for(int i = 0; i < 3; i++) cin >> n[i];
    sort(n.begin(), n.end(), greater<int>());
    cout << (10*n[0] + n[1]) + n[2];
}