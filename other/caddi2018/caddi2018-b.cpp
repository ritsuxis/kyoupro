#include <bits/stdc++.h>
using namespace std;

int main (void){
    int n, h, w;
    int ans = 0;
    cin >> n >> h >> w;
    for (int i =0; i < n; i++ ){
        int a, b;
        cin >> a >> b;
        if (a >= h && b >= w) ans++;
    }
    cout << ans << endl;
}