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
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end());

    if(a[0] > b[0]){
        cout << "War" << endl;
    }
    else{
        bool war = true;
        for(int i = a[0] + 1; i <= b[0]; i++){
            if(x < i && i <= y) war = false; 
        }
        if(war) cout << "War" << endl;
        else cout << "No War" << endl;
    }
    return 0;

}