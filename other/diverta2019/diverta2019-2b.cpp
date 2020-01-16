#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    vector<pair<int, int>> A(n);
    vector<tuple<int, int, int>> count(0);
    REP(i, n){
        cin >> A[i].first >> A[i].second;
    }
    whole(sort, A);
    REP(i, n){
        FOR(j, i + 1, n){
            int dx = A[j].first - A[i].first, dy = A[j].second - A[i].second;
            bool fd = false;
            REP(k, count.size()){
                if(get<0>(count[k]) == dx and get<1>(count[k]) == dy ){
                    get<2>(count[k])++;
                    fd = true;
                    break;
                }
            }
            if(!fd) count.push_back(make_tuple(dx, dy, 1));
        }
    }
    int maxi = 0;
    REP(i, count.size()) maxi = max(maxi, get<2>(count[i]));

    cout << n - maxi << endl;
}