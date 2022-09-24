#include <stdio.h>

void main(){
    int N; scanf("%d", &N);
    int pp[5000];
    int i;
    int M;
    for (i = 0 ; i < N ; i++){
        scanf("%d", &pp[i]);
    }
    scanf("%d", &M);
    if (M > 0){
        for (i = 0 ; i < N ; i++){
            printf("%d ", pp[i] + M);
        }
    }
    else if (M < 0){
        for (i = N - 1 ; i >= 0 ; i--){
            printf("%d ", pp[i] + M);
        }
    }
}