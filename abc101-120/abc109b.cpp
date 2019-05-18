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
    int n;
    cin >> n;
    string str[n];
    bool ans = true;
    for(int i = 0; i < n; i++){
        cin >> str[i];
        if(i != 0 && str[i - 1].back() != str[i].front() ) ans = false;
        for(int j = 0; j < i; j++){
            if(str[j] == str[i]) ans = false;
        } 

    }
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    
}