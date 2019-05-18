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
    int n, k;
    int judge;
    string str;
    cin >> n >> k >> str;

    if(k > n) {
        cout << n << endl;
        return 0;
    }

    vector<int> A(100010);

    if(str[0] == 1) judge = 1; //頭が0か1か
    else judge = 0;

    int line = 1, b = 0; //bはAの中でデータが入っているところの１っ個後ろを覚えている
    for(int i = 1; i < n; i++) {
        if(str[i - 1] == str[i]) line += 1; //前と数字が同じなら+1
        else {
            A[b] = line;
            line = 1;
            b += 1;
        }
    }
    // データが存在しないところはどう処理すればいいの
    for(int i = 0; i < n; i = i * 2 + judge){
        //０のところを横にK個ずつ取っていけばいい
    }



}