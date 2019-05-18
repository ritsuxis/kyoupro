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
    long long int x, y, z, n, numans = 0LL, tmp;
    cin >> x >> y >> z >> n;
    tmp = min(3000LL, x * y * z);
    vector<long long int> a(x), b(y), c(z), ans(tmp);
    for (long long int i = 0LL; i < x; i ++ ) cin >> a[i];
    for (long long int i = 0LL; i < y; i ++ ) cin >> b[i];
    for (long long int i = 0LL; i < z; i ++ ) cin >> c[i];

    for(long long int i = 0LL; i < x; i++){
        for(long long int j = 0LL; j < y; j++){
            for(long long int k = 0LL; k < z; k++){
                ans[numans] = a[i] + b[j] + c[k];
                numans++;
            }
        }
    }

    sort(ans.begin(), ans.end(), greater<long long int>());
    for(long long int i = 0LL; i < n; i++) cout << ans[i] << endl;

}