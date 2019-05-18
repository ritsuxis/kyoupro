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
    int n, yen;
    cin >> n >> yen;
    for(int man = 0; man <= n; man++){
        for(int gosen = 0; gosen <= n - man; gosen++){
            if(10000*man + 5000*gosen + 1000*(n - man - gosen) == yen){
                cout << man << " " << gosen << " " << n - man - gosen << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}