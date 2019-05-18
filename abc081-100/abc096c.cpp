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
    int priceA, priceB, priceAB, x, y, ans, morePizza;
    cin >> priceA >> priceB >> priceAB >> x >> y;
    if(x > y) morePizza = priceA;
    else morePizza = priceB;
    ans = min(max(x, y) * 2 * priceAB, priceA * x + priceB * y);
    ans = min(ans, min(x, y) * 2 * priceAB + (max(x, y) - min(x, y)) * morePizza);

    cout << ans << endl;
    


}