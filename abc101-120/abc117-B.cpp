#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    sort(A.begin(), A.end(), greater<int>());
    int sum = 0;
    for (int i = 1; i < n; i++) sum += A[i];
    if (sum > A[0]) cout << "Yes" << endl;
    else cout << "No" << endl;
    

}