#include <stdio.h>
#include <stdlib.h>

int main(){
    int R, C, K; scanf("%d%d%d", &R, &C, &K);
    int AB[101][101];
    int* A = (int*)malloc(K * sizeof(int));
    int* B = (int*)malloc(K * sizeof(int));
    int i = 0, i2 = 1;
    int row, col;
    for (i = 0 ; i < K ; i++){
        scanf("%d%d", &A[i], &B[i]);
    }
    //*MAKE ARRAY AB[] = 0
    for (row = 1 ; row <= R ; row++){
        for (col = 1 ; col <= C ; col++){
            AB[row][col] = 0;
        }
    }
    //*CHANGE POSITION
    i = 0;
    for (i = 0 ; i < K ; i++){
        for (row = 1 ; row <= R ; row++){
            for (col = 1 ; col <= C ; col++){
                if (row == A[i] && col == B[i]){
                    AB[row][col] = i2;
                    //printf("%d", AB[row][col]);
                    i2++;
                }
            }
        }
    }
    //*OUTPUT
    for (row = 1 ; row <= R ; row++){
        for (col = 1 ; col <= C ; col++){
            printf("%d", AB[row][col]);
            if (row == R && col == C){
                break;
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}