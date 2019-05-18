#include<bits/stdc++.h>
using namespace std;

int main (void){
    int N, K;
    cin >> N >> K;
    if (N % 2 != 0){
        if (N / 2 + 1 >= K) { 
            cout << "YES";
        }
        else cout << "NO";
       
    }
    else {
        if (N / 2 >= K) cout << "YES";
        else cout << "NO";
    }
    cout << endl;
}