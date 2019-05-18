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
    long long int n, ans, wari;
    vector<long long int> traffic(5);
    cin >> n;
    for(long long int i = 0LL; i < 5LL; i++) cin >> traffic[i];
    sort(traffic.begin(), traffic.end());
    if(n % traffic[0] == 0) wari = n / traffic[0] - 1LL;
    else wari = n / traffic[0];
    ans = 5LL + wari;
    cout << ans << endl;

}