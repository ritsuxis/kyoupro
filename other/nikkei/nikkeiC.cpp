#include<bits/stdc++.h>
using namespace std;

int comp(vector<int> A, vector<int> B, int N){
    int premax = 0;
    int premax_b = 0;
    vector<int> finish(1);
    for (int j = 0; j < N; j++){
        bool flag = false;
        for (int k = 0; k < finish.size(); k++){

            if (A[j] == finish[k]){
                flag = true;
                break;
            }
        }
        if (flag) break;
        if (premax < A[j]) premax = A[j];
        else if (premax = A[j] ){
            if (premax_b < B[j]){
            premax = A[j];
            }
        }
        
    }
    return premax, finish;

}

int main(void){
    int N;
    cin >> N;
    vector<int> A(N), B(N), finish(1);
    for (int i = 0; i < N; i++) cin >> A[i] >> B[i];
    long long int ans;
    

    }
}
