#define _USE_MATH_DEFINES
#include <cstdio>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <complex>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <limits>
#include <climits>
#include <cfloat>
#include <functional>
#include <iterator>
using namespace std;

const int INF = INT_MAX / 2;

int solve(int x)
{
    if(x < 0)
        return INF;
    else return x;
}

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    // 各部分問題において状態は上の桁に繰り下がりがある（ない）×自分に繰り下がりがある（ない）の4通りだけを考えればいい
    vector<int> dp(2, 0);
    dp[1] = 1;
    for(int i=0; i<n; ++i){
        vector<int> nextDp(2, INF);
        for(int a=0; a<2; ++a){
            for(int b=0; b<10; ++b){
                int x = a * 10 + b - (s[i] - '0');
                // dp[a]を足していることに注意dp[1]のときは上の桁から借りていることになる
                nextDp[0] = min(nextDp[0], dp[a] + solve(b) + solve(x));
                nextDp[1] = min(nextDp[1], dp[a] + solve(b) + solve(x - 1)); // １余計に払う時つまり3に対して4払う時、これは36にたいして40払う時とかを考えるといい
            }
        }
        dp.swap(nextDp);
    }
    cout << dp[0] << endl; //上から見ていくので最後の１の位の時に繰り下がりは発生しないよってdp[0]

    return 0;
}
