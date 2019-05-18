#include<bits/stdc++.h>
using namespace std;

int main(void){
    long long int n, ans = 1000;
    cin >> n;
    while(n >= 100){
        ans = min(ans, abs(n % 1000 - 753));
        n /= 10;
    }
    cout << ans << endl;
}
