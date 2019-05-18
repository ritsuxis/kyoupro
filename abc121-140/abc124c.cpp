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
    string str;
    cin >> str;
    int stringSize = str.size(), ans = 0;
    for(int i = 0; i < stringSize; i++){
        if(i % 2 == 0 && str[i] == '0') ans++;
        else if(i % 2 != 0 && str[i] == '1') ans++; 
    }
    if(ans > stringSize - ans) ans = stringSize - ans;
    cout << ans << endl;


}