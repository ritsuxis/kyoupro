#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
/* 全部偶数だと後手勝ち */
int main (void) {
    int n;
    cin >> n;
    int i = 0;
    while (i < n){
        int a;
        cin >> a;
        if(a % 2 == 1){
            cout << "first" << endl;
            return 0;
        }
        i++;
    }
    cout << "second" << endl;
    return 0;
    
    
}

