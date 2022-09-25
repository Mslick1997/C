#include <stdio.h>

int main(){
    int A[10000];
    int B[10000];
    int AK[10000], BK[10000];
    int i, i2 = 1;
    int cntA = 0, cntB = 0;
    int sumA = 0, sumB = 0;
    //*MAKE ARRAY SPACE
    for (i = 0;i < 10000;i++){
        AK[i] = -5;
        BK[i] = -5;
    }
    //*INPUT SET A, SET B
    for (i = 0;i < 10000;i++){
        scanf("%d", &A[i]);
        if (A[i] < 0){
            break;
        }
        AK[A[i]] = A[i];
    }
    for (i = 0;i < 10000;i++){
        scanf("%d", &B[i]);
        if (B[i] < 0){
            break;
        }
        BK[B[i]] = B[i];
    }
    //*UPDATE AK, BK
    for (i = 0;i < 10000;i++,i2++){
        if (AK[i] > -1){
            //printf("%d ", AK[i]);
            sumA = sumA + AK[i];
            cntA++;
        }
    }
    for (i = 0;i < 1000;i++,i2++){
        if (BK[i] > -1){
            //printf("%d ", BK[i]);
            sumB = sumB + BK[i];
            cntB++;
        }
    }
    //printf("%d %d", sumA, sumB);
    if (sumA == sumB){
        printf("A and B are anagrams\n");
        printf("A %d\nB %d", cntA, cntB);
    }
    else {
        printf("A and B are not anagrams\n");
        printf("A %d\nB %d", cntA, cntB);
    }
    return 0;
}