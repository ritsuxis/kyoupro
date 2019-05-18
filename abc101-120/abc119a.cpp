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
    string s;
    cin >> s;
    int a, b, c;
    a = stoi(s.substr(0, 4));
    b = stoi(s.substr(5, 2));
    c = stoi(s.substr(8, 2));
    if (a > 2019) cout << "TBD" << endl;
    else if (a == 2019 && b > 4) cout << "TBD" << endl;
    else cout << "Heisei" << endl;


}