#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
using namespace std;
typedef long long ll; // long longをllでかけるようにした

// 最大公約数
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

// 最小公倍数
int lcm( int m, int n )
{
	// 引数に０がある場合は０を返す
	if ( ( 0 == m ) || ( 0 == n ) )
		return 0;
	
	return ((m / gcd(m, n)) * n); // lcm = m * n / gcd(m,n)
}

/* 二分探索 */

//indexが条件を満たすかどうか
bool isOK(ll index, ll key, vector<ll> a) {
    if (a[index] > key) return true;
    else return false;
}

//汎用的な二分探索のテンプレ
ll meguru_binary_search(ll key, vector<ll> A){
    ll ng = -1; // lowerの時は-1, upperの時は(int)A.size() //「index = 0」が条件を満たすこともあるので、初期値は -1
    ll ok = (ll)A.size(); // lowerの時は(int)A.size(), upperの時は-1 // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* どんな二分探索でもここの書き方を変えずにできる！ */
    while(abs(ok - ng) > 1) {
        ll mid = (ok + ng) / 2;
        if(isOK(mid, key, A)) ok = mid;
        else ng = mid;
    }

    /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている(lowerだと) */
    return ok;
}
/* lower_boundとかでイテレータから配列の添え字を求めたいとき(lower_bound(v.begin(),v.end(),hoge)-v.begin())というようにする */
//distance使ってもいい

int main(void){
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N), B(N);
    REP(i, N) cin >> A[i];
    REP(i, N) cin >> B[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    ll ng = 0, ok = 1e18;
    while(ok - ng > 1){
        ll mid = (ok + ng) / 2;
        ll count = 0;
        for(ll i = 0; i < N; i++) count += upper_bound(B.begin(), B.end(), mid / A[i]) - B.begin();
        if(K <= count) ok = mid;
        else ng = mid;
    }
    cout << ok << endl;

    
}