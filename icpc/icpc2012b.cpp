#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

// string から int にする関数
int to_int(string a, int b){
    int ans = 0;
    REP(i, b){
        ans += a[i] * pow(10, b - i - 1);
    }
    return ans;
}

int main(void){
    while(true){
        int aInt, b; cin >> aInt >> b;
        if(aInt == 0 and b == 0) return 0;
        else{
            vector<int> Num(0);
            Num.push_back(aInt); // 初めのぶんも追加しておかないといけない
            string a = to_string(aInt);
            bool find = false;
            if(a.size() < b) while(a.size() != b) a.push_back('0'); // 桁数合わせ
            while (true){
                if(a.size() < b) while(a.size() != b) a.push_back('0'); // 桁数合わせ

                whole(sort, a); // 辞書順でソートすると勝手に最小になってくれる
                string aMinStr = a; // わざわざ変数入れるまででもないけどわかりやすいように
                int aMin = to_int(aMinStr, b);

                whole(sort, a, greater<>()); // 逆すると最大になる
                string aMaxStr = a;
                int aMax = to_int(aMaxStr, b);

                int ans = aMax - aMin; // 保存される値
                int findNum; // 見つかりました？
                for(int i = 0; i <= Num.size() - 1; i++){
                    if(ans == Num[i]){
                        find = true;
                        findNum = i; // 見つかったときの値を覚えておかなくちゃ
                    }
                }

                if(find){
                    cout << findNum << " " << Num[findNum] << " " <<  Num.size() - findNum << endl;
                    break;
                }
                else{
                    Num.push_back(ans);
                    a = to_string(ans);
                }
            

            }
            
        }
    }
}