#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
const int LEN = 100005;

typedef struct pp{ //typedefを使うことでPの宣言でstruct pp {~}の宣言になる
  char name[100];
  int t;
} P;

P Q[LEN+1];
int head, tail, n;

void enqueue(P x){ // キューの末尾に要素ｘを追加する
    Q[tail] = x;
    tail = (tail + 1) % LEN; //LENを超えたときに0に戻る（わっかみたいになる）

}

P dequeue(){ // キューの先頭から要素を取り出す
    P x = Q[head];
    head = (head + 1) % LEN;
    return x;
}

int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  head = 1;
  tail = n + 1;
  while(head != tail){
      u = dequeue();
      c = min(q, u.t);
      u.t -= c;
      elaps += c;
      if (u.t > 0) enqueue(u);
      else
      {
          printf("%s %d\n", u.name, elaps);
      }
      
  }
  return 0;
}