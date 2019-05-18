#include <bits/stdc++.h>
using namespace std;

int main (void){
    string n;
    int ans = 0;
    cin >> n;
    if (n[0] == '2') ans++; 
    if (n[1] == '2') ans++; 
    if (n[2] == '2') ans++; 
    if (n[3] == '2') ans++;
    cout << ans << endl;
    return 0; 
}