#include<bits/stdc++.h>
#include<algorithm> 
using namespace std;

int main(void){
    int N ,A ,B;
    cin >> N >> A >> B;
    int ans;
    ans = min(A, B);
    cout << ans << " ";
    if (A + B > N) cout << A + B - N << endl;
    else cout << 0 << endl;
}