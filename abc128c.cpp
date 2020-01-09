#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int N, m; cin >> N >> m;
    vector<vector<int>> s(m);
    REP(i, m){
        int k; cin >> k;
        s[i].resize(k);
        REP(j, k){
            cin >> s[i][j];
            --s[i][j];
        }
    }
    vector<int> p(m);
    REP(i, m) cin >> p[i];
    int ans = 0;
    for (int i = 0; i < (1 << N); ++i) {
	bool ok = true;
	for (int j = 0; j < m; ++j) {
		int c = 0;
		for (int id : s[j]) {
			if ((i >> id) & 1) {
				++c;
			}
		}
		c %= 2;
		if (c != p[j]) {
			ok = false;
		}
	}
	if (ok) {
		++ans;
	}
}
cout << ans << endl;


}