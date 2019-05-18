#include<bits/stdc++.h>
using namespace std;

int main(void){
    int coA = 0, coB = 0, coC = 0, coD = 0;
    vector<int> A(6);
    for (int i = 0; i < 6; i++){
        cin >> A[i];
        if (A[i] == 1) coA++;
        else if (A[i] == 2) coB++;
        else if (A[i] == 3) coC++;
        else if (A[i] == 4) coD++;
    }
    if (coA * coB * coC * coD == 4) cout << "YES" << endl;
    else cout << "NO" << endl;

}