#include <stdio.h>
#include <stdlib.h>

int main(){
    int N; scanf("%d", &N);
    int M;
    int* pp = (int*)malloc(N * sizeof(int));
    for (int i = 0 ; i < N ; i++){
        pp[i] = 0;
    }
    for (int i = 0 ; i < N ; i++){
        scanf("%d", &pp[i]);
    }
    scanf("%d", &M);
    if (M > 0){
        for (int i = 0 ; i < N ; i++){
            printf("%d ", pp[i] + M);
        }
    }
    else if (M < 0){
        for (int i = N - 1 ; i >= 0 ; i--){
            printf("%d ", pp[i] + M);
        }
    }
    return 0;
}