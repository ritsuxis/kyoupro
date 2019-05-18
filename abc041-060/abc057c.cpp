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

int countKeta(int n){
    int ans = 0;
    while(n > 0){
        n /= 10;
        ans++;
    }
    return ans;
} 

int main(void){
    int n, sqrtN, ans;
    cin >> n;
    sqrtN = sqrt(n);
    for(int i = 1; i < sqrtN; i++){
        if(n % i == 0) {
            ans = countKeta(i);
            cout << ans << endl;
            return 0;
        }
    }
}
