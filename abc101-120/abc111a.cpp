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
    string n;
    cin >> n;
    for(int i = 0; i < n.size(); i++){
        if(n[i] == '9') n[i] = '1';
        else n[i] = '9';
    }
    cout << n;

}