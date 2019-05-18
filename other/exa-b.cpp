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
    int n, countR = 0, countB = 0;
    char c;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c;
        if(c == 'R') countR++;
        else countB++;
    }
    if(countR > countB) cout << "Yes" << endl;
    else cout << "No" << endl;
}