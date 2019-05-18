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
    int ans;
    cin >> ans;
    for (int i = 0; i < n - 1; i++){
        int a;
        cin >> a;
        ans = gcd(a, ans);
    }
    cout << ans << endl;
}