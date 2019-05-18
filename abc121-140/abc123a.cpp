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
    vector<int> an(5);
    int k;
    for (int i = 0; i < 5; i++) {
        cin >> an[i];
    }
    cin >> k;
    for(int i = 0; i < 4; i++) {
        for(int l = 1; l < 5; l++){
            if(an[l] - an[i] > k) {
                cout << ":(" << endl;
                return 0;
            }
        }
    }
    cout << "Yay!" << endl;
}