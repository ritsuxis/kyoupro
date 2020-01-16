#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int N; cin >> N;
    vector<int> M(N);
    REP(i, N) cin >> M[i];
    whole(sort, M);

    int res = 0;

    for(int mid = N - 1; mid >= 0; mid--){
        for(int low = mid - 1; low >= 0; low--){
            auto itr = whole(lower_bound ,M, M[mid] + M[low]);
            int ng = distance(itr, M.end());
            res += (N - 1 - mid) - ng;
        }
    }

    cout << res << endl;


}