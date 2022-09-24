#include <stdio.h>

void main(){
    int N; scanf("%d", &N);
    int pp[300000];
    int i, num;
    for (i = 1 ; i <= 10000 ; i++){
        pp[i] = 0;
    }
    for (i = 0 ; i < N ; i++){
        scanf("%d", &num);
        pp[num] = num;
    }
    for (i = 1 ; i <= 10000 ; i++){
        if (pp[i] > 0){
            printf("%d ", i);
        }
    }
}