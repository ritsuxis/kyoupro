#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

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
int binary_search1(int key, vector<int> A){
    int ng = -1;
    int ok = (int)A.size();

    while(abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;
        if(isOK(mid, key, A)) ok = mid;
        else ng = mid;
    }
    return ok;
}

int binary_search2(int key, vector<int> A){
    int ng = (int)A.size();
    int ok = -1;

    while(abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;
        if(isOK(mid, key, A)) ok = mid;
        else ng = mid;
    }
    return ok;
}

int main(void){
    ll n, ans = 0;
    cin >> n;
    vector<ll> A(n), B(n), C(n);
    for(ll i = 0; i < n; i++) cin >> A[i];
    for(ll i = 0; i < n; i++) cin >> B[i];
    for(ll i = 0; i < n; i++) cin >> C[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());
    for(ll i = 0; i < n; i++) ans += (lower_bound(A.begin(), A.end(), B[i]) - A.begin()) * (C.end() - upper_bound(C.begin(), C.end(), B[i]));
    cout << ans << endl;
}