#include <stdio.h>
#include <limits.h>

void main(){
    int max = INT_MIN;
    int max2 = INT_MIN;
    int N, k; scanf("%d %d", &N, &k);
    int i, i2, cnt = 0;
    int tanny = 0;
    int sum = 0;
    int score[1000][5], K[5], B[1000] ,A[5];
    for (i = 0 ; i < N ; i++){
        for (i2 = 0 ; i2 < k ; i2++){
            scanf("%d", &score[i][i2]);
        }
    }
    while (tanny < k){
        for (i = 0 ; i < N ; i++){
            for (i2 = 0 ; i2 < k ; i2++){
                if (i2 == tanny){
                    if (max2 < score[i][i2]){
                        max2 = score[i][i2];
                    }
                }
            }
        }
        A[tanny] = max2;
        max2 = 0;
        tanny++;
    }
    for (i = 0 ; i < N ; i++){
        for (i2 = 0 ; i2 < k ; i2++){
            sum += score[i][i2];
        }
        B[i] = sum;
        sum = 0;
        if (max < B[i]){
            max = B[i];
        }
    }
    for (i = 0 ; i < N ; i++){
        for (i2 = 0 ; i2 < k ; i2++){
            if (B[i] == max){
                K[i2] = score[i][i2];
                if (K[i2] == A[i2]){
                    cnt++;
                }
            }
        }
    }
    printf("%d\n%d", max, cnt);
}