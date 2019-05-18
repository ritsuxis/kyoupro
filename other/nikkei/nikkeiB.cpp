#include<bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<char> A(N), B(N), C(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int i = 0; i < N; i++){
        cin >> B[i];
    }
    for (int i = 0; i < N; i++){
        cin >> C[i];
    }

     int count = N*3;
     for (int i = 0; i < N; i++){
         if (A[i] == B[i] && B[i] == C[i]) count -= 3;
         else if (A[i] == B[i] || A[i] == C[i] || B[i] == C[i]) count -= 2;
         else count--;
     }

     cout << count << endl;

}