#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    vector<pair<int, int>> odd(1e5), even(1e5);
    REP(i, 1e5){
        odd[i].first = 0;
        even[i].first = 0;
        odd[i].second = i + 1;
        even[i].second = i + 1;
    }

    REP(i, n){
        int inp; cin >> inp;
        if((i + 1) % 2 != 0) odd[inp].first++;
        else even[inp].first++;
    }
    whole(sort, odd, greater<>());
    whole(sort, even, greater<>());
    int sum = 0;
    if(odd[0].second == even[0].second){
        if(odd[0].first > even[0].first) sum = odd[0].first + even[1].first;
        else if(odd[0].first < even[0].first) sum = odd[1].first + even[0].first;
        else if(odd[0].first == even[0].first){
            if(odd[1].first > even[1].first) sum = odd[1].first + even[0].first;
            else sum = odd[0].first + even[1].first;
        }
    }
    else sum = odd[0].first + even[0].first;

    cout << n - sum << endl;
}