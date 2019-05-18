#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

// ポインタ渡し
void swapo(int* a, int* b){ // int* 型のx、xには「アドレス」が入っている
    cout << "pointer" << endl;  // *は間接演算子という
    int tmp = *a; // int*に*をつけるとアドレスの中身の値を示す、だからint型
    *a = *b; // *b = *(*y) = y (int型)を*a = *(*x) = x (int型)に入れる
    *b = tmp; // *b(int型)にtmp = *a(int型)を入れる
    /* これでアドレスの「中身」を変えたのでｘとｙの値が変わっている 
       しかし渡された値がnullの場合、挙動がおかしくなるのでC++では下の参照渡しを使うべき */
}

// 参照渡し
void swaref(int& a, int& b){ // 貰った値のアドレスを得る 別名をつけるイメージ
    cout << "reference" << endl; // 本当の参照渡し
    int tmp = a; // 値渡しみたいに書ける
    a = b;
    b = tmp; // 元のxとyも変わる
    // C言語ではできない
}

// Deep Copy(そもそもの値を変えるやつ)やShallow Copy(ただのコピー)という言われ方が他の言語（C++も？）主流

int main(void){
    int x, y; cin >> x >> y;
    cout << x << y << endl;
    swapo(&x, &y);
    cout << x << y << endl;
    swaref(x, y);
    cout << x << y << endl;
}