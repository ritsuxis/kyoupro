    #include<bits/stdc++.h>
    #define REP(i, n) for (int i = 0; i < n ; i++)
    #define FOR(i, a, b) for (int i = (a); i < (b); i++)
    #define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
    using namespace std;
    typedef long long ll; // long longをllでかけるようにした
    const int INF = 1e9;
     
    int main(void){
        int n; cin >> n;
        vector<int> A(n);
        int count = 0;
        scanf("%d", &A[0]);
        FOR(i, 1, n) {
            scanf("%d", &A[i]);
            if(A[0] == A[i]) count++;
        }
        if(count == n - 1) {
            printf("%d\n", A[0]);
            return 0;
        }
        whole(sort, A);
        int ans = 0;
        FOR(i, 1, A[1] + 1){
            int kyoyou = 0;
            int j = 0;
            REP(j, n)
            {
                if(A[j] % i != 0) kyoyou++;
                if(kyoyou == 2) break;
                if(j == n - 1) ans = i;
            }
            
        }
        printf("%d\n", ans);
    }