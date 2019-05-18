#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n, m;
    cin >> n >> m;
    int k1;
    cin >> k1;
    vector<int> sai(k1), kazoe(k1);
    for (int i = 0; i < k1; i++) cin >> sai[i];
    for (int i = 0; i < n - 1; i++){
        int a;
        cin >> a;
        for (int j = 0; j < a; j++){
            int b;
            cin >> b;
            for (int k = 0; k < k1; k++){
                if (b == sai[k]) {
                    kazoe[k]++;
                }
            }

        }

    }
    int count = 0;
    for (int i = 0; i < k1; i++){
        if (kazoe[i] == n - 1) count++;
    }
    cout << count << endl;
    return 0;
}