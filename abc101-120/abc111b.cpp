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
    int n, comp, ans;
    cin >> n;
    comp = n / 100;
    ans = comp*100 + comp*10 + comp;
    if(ans >= n) cout << ans << endl;
    else cout << (comp + 1)*100 + (comp + 1)*10 + comp + 1 << endl;


}