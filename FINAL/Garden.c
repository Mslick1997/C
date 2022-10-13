#include <stdio.h>
#include <limits.h>

void main(){
    int M, N; scanf("%d %d", &M, &N);
    int pp[300][50];
    int r, c, i;
    int sum = 0, sumA = 0;
    int kebkar[M], ans_max, ans_min;
    int max = INT_MIN, min = INT_MAX;
    for (r = 0 ; r < N ; r++){
        for (c = 0 ; c < M ; c++){
            scanf("%d", &pp[r][c]);
            if (pp[r][c] > 10){
                pp[r][c] = 10;
            }
            sumA += pp[r][c];
        }
    }
    sumA *= 40;
    for (i = 0 ; i < M ; i++){
        for (r = 0 ; r < N ; r++){
            for (c = 0 ; c < M ; c++){
                if (c == i){
                    sum += pp[r][c];
                }
            }
        }
        kebkar[i] = sum;
        //printf("(%d)", kebkar[i]);
        if (max <= kebkar[i]){
            max = kebkar[i];
            ans_max = i + 1;
        }
        if (min >= kebkar[i]){
            min = kebkar[i];
            ans_min = i + 1;
        }
        sum = 0;
    }
    printf("%d\n%d\n%d", sumA, ans_max, ans_min);
}