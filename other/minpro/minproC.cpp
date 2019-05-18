#include<bits/stdc++.h>
using namespace std;

int main(void){
    unsigned long long int K, A, B, koukan, amari, saisyo;
    unsigned long long int ans; // 桁数多いならlonglong
    cin >> K >> A >> B;
    if (A + 2ULL >= B) cout << K + 1ULL << endl; //定数にも型があるULL(unsigned long long)等をつける
    else {
        saisyo = K - (A - 1ULL); //初めの1枚を初めから考える
        koukan = saisyo / 2ULL;
        amari = saisyo % 2ULL;
        ans = koukan * (B - A) + amari + A;
        cout << ans << endl;
    }
}