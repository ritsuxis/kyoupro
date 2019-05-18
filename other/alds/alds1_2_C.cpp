#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

struct Card {char suit, value;};

void print(struct Card A[], int N){
    for (int i = 0; i < N; i++){
        if (i) cout << " ";
        cout << A[i].suit << A[i].value;
    }
    cout << endl;
}

void BubbleSort(struct Card A[], int N){
    for (int i = 0; i < N; i++){
        for (int j = N - 1; j >= i + 1; j--){
            if (A[j].value < A[j - 1].value){
                swap(A[j], A[j - 1]);
            }
        }
    }

}

void SelectionSort(struct Card A[], int N) {
    for (int i = 0; i < N; i++){
        int minj = i;
        for (int j = i; j < N; j++){
            if (A[j].value < A[minj].value) minj = j;
        }
        swap(A[i], A[minj]);
    }
}

bool isStable(struct Card A[], struct Card B[], int N){
    for (int i = 0; i < N; i++){
        if (A[i].suit != B[i].suit) return false;
    }
    return true;
}

int main(void){
    int N;
    cin >> N;
    Card C1[100], C2[100];
    for(int i = 0; i < N; i++) {
        cin >> C1[i].suit >> C1[i].value;
        C2[i] = C1[i];
    }
    
    BubbleSort(C1, N);
    SelectionSort(C2, N);
    
    print(C1, N);
    cout << "Stable" << endl;
    print(C2, N);
    if ( isStable(C1, C2, N)) cout << "Stable";
    else cout << "Not stable";
    cout << endl;
    
    return 0;

}