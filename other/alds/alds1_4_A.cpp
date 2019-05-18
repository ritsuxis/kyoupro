#include<cstdio>
using namespace std;

int search (int A[], int n, int key){
    int i = 0;
    A[n] = key;
    while( A[i] != key) i++;
    return i != n;
}

int main(void){
    int n, q, count = 0, key, i, A[10000 + 1];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &key);
        if (search(A, n, key)) count++;
    }

    printf("%d\n", count);
    return 0;

}