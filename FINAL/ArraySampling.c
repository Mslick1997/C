#include <stdio.h>
#include <limits.h>

void main(){
    int N, K; scanf("%d", &N);
    int i, i2;
    int pp[100][1000], A[100], P[1000];
    int sum = 0, cnt = 0;
    int max = INT_MIN, min = INT_MAX;
    for (i = 1 ; i < 100 ; i++){
        for (i2 = 0 ; i2 < 1000 ; i2++){
            pp[i][i2] = 0;
        }
    }
    for (i = 1 ; i <= N ; i++){
        scanf("%d", &K);
        for (i2 = 0 ; i2 < K ; i2++){
            scanf("%d", &pp[i][i2]);
        }
    }
    i = 1;
    i2 = 0;
    while (1){
        scanf("%d", &A[i]); if (A[i] == 0){break;}
        scanf("%d", &P[i2]);
        if (pp[A[i]][P[i2]] != 0){
            //printf("(%d)", pp[A[i]][P[i2]]);
            sum += pp[A[i]][P[i2]];
            if (max < pp[A[i]][P[i2]]){
                max = pp[A[i]][P[i2]];
            }
            if (min > pp[A[i]][P[i2]]){
                min = pp[A[i]][P[i2]];
            }
        }
        else {
            cnt++;
        }
        i++;
        i2++;
    }
    printf("%d\n%d\n%d\n%d", sum, max, min, cnt);
}