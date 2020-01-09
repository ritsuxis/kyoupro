#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

vector<pair<int, int>> Num(0);

bool compare_by_B(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}

void count_num(int x){
    REP(i, Num.size()){
        if(Num[i].first == x) {
            Num[i].second++; 
            return ;
        }
    }
    Num.push_back(make_pair(x, 1));
    return ;
}

int main(void){
    int n; cin >> n;
    vector<int> a(n);
    REP(i, n){
        cin >> a[i];
        int x = (i + 1) - a[i];
        count_num(x);
    }
    whole(sort, Num, compare_by_B);
    int ans = 0;
    bool all = true;
    REP(i, n){
        if(Num[0].second != Num[i].second){
            all = false;
            break;
        }
    }
    if(all){
        REP(i, n){
            ans += abs(a[i] - (i + 1));
        }
        cout << ans << endl;
        return 0;
    }
    else{
        REP(i, n){
        ans += abs(a[i] - (-Num[0].first + i + 1));
        }
        cout << ans << endl;
        return 0;
    }
}