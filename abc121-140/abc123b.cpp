#include<bits/stdc++.h>
using namespace std;

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

int main(void){
    int food, ans = 0;
    vector<int> wait(5);
    for(int i = 0; i < 5; i++){
        cin >> food;
        ans += food;
        if(food % 10 == 0) wait[i] += 0;
        else wait[i] += 10 - (food % 10); 
    }
    sort(wait.begin(), wait.end());
    for(int i = 0; i < 4; i++) ans += wait[i];
    cout << ans << endl;
}