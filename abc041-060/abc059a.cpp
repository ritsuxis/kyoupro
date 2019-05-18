#include<bits/stdc++.h>

using namespace std;

int main(void){
    string a, b, c;
    char s1, s2, s3;
    cin >> a >> b >> c;
    transform(a.begin(), a.end(), a.begin(),  ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);
    transform(c.begin(), c.end(), c.begin(), ::toupper);
    s1 = a[0];
    s2 = b[0];
    s3 = c[0];
    cout << s1 << s2 << s3 << endl;
}