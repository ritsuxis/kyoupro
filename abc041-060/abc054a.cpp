#include<bits/stdc++.h>

using namespace std;

int main(void){
    int a, b;
    cin >> a >> b;
    if (a == 1 && b != 1) cout << "Alice" << endl;
    else if (a != 1 && b == 1) cout << "Bob" << endl;
    else if (a - b > 0) cout << "Alice" << endl;
    else if (a - b < 0) cout << "Bob" << endl;
    else if (a - b == 0) cout << "Draw" << endl;
}