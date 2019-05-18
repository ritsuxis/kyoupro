#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd(int a, int b)
{
    int c;

    if (a < b) {
        a+=b; b=a-b; a-=b;
    }

    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

/* 二分探索 */

//indexが条件を満たすかどうか
bool isOK(int index, int key, vector<int> a) {
    if (a[index] >= key) return true;
    else return false;
}

//汎用的な二分探索のテンプレ
int meguru_binary_search(int key, vector<int> A){
    int ng = -1; // lowerの時は-1, upperの時は(int)A.size()
    int ok = (int)A.size(); // lowerの時は(int)A.size(), upperの時は-1

    while(abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;
        if(isOK(mid, key, A)) ok = mid;
        else ng = mid;
    }
    return ok;
}

int meguru_binary_search1(int key, vector<int> A){
    int ng = (int)A.size(); // lowerの時は-1, upperの時は(int)A.size()
    int ok = -1; // lowerの時は(int)A.size(), upperの時は-1

    while(abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;
        if(isOK(mid, key, A)) ok = mid;
        else ng = mid;
    }
    return ok;
}

int main(void){
    int n, ans = 0;
    cin >> n;
    vector<int> A(n), B(n), C(n);
    for(int i = 0; i < n; i++) cin >> A[i];
    for(int i = 0; i < n; i++) cin >> B[i];
    for(int i = 0; i < n; i++) cin >> C[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());
    for(int i = 0; i < n; i++) ans += (meguru_binary_search(B[i], A) * (meguru_binary_search1(B[i], C)));
    cout << ans << endl;
}