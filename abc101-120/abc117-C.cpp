#include<bits/stdc++.h>
using namespace std;

int main (void){
    int n, m, sum = 0;
    cin >> n >> m;
    vector<int> x(m);
    vector<int> sa(m - 1);
    for (int i = 0; i < m; i++) cin >> x[i];

    sort(x.begin(), x.end());
    for (int i = 0; i < m - 1; i++){
        sa[i] = x[i + 1] - x[i];
    }
    sort(sa.begin(), sa.end());
    for (int i = 0; i < n; i++){
        sa.pop_back();
    }
    for (int i = 0; i < m - n; i ++){
        sum += sa[i];
    }
    cout << sum << endl;
    return 0;
}