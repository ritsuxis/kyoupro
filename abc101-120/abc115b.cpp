#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    sort(A.begin(), A.end());
    A[n - 1] /= 2;
    int ans = 0;
    for (int i = 0; i < n; i++) ans += A[i];
    cout << ans << endl;
}