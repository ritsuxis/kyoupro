#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

struct node
{
    int parent = INF;
};


int main(void){
    int n, q; cin >> n >> q;
    vector<node> N(n);
    int a, b;
    vector<ll> B(n);
    N[0].parent = -1;
    REP(i, n - 1){
        // cin >> A[i].first >> A[i].second;
        cin >> a >> b;
        if(N[a - 1].parent != INF) N[b - 1].parent = a - 1;
        else N[a - 1].parent = b - 1;
    }

    REP(i, q){
        int p, x; cin >> p >> x;
        B[p - 1] += x;
    }

    vector<int> ans(n);
    REP(i, n){
        for(int j = i; j != -1; j = N[j].parent){
            ans[i] += B[j];
        }
    }

    REP(i, n){
        if(i != 0) cout << " ";
        cout << ans[i];
    }
    cout << endl;

}