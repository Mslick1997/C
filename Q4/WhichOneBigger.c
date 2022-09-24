#include <stdio.h>

int main(){
    int N; scanf("%d", &N);
    int pp[50000];
    int i, M;
    int sumM = 0, sumN = 0;
    for (i = 1 ; i <= N ; i++){
        scanf("%d", &pp[i]);
    }
    scanf("%d", &M);
    for (i = 1 ; i <= N ; i++){
        if (pp[i] < M){
            sumN += pp[i];
        }
        else if (pp[i] > M){
            sumM += pp[i];
        }
    }
    if (sumN > sumM){
        printf("%d", sumN);
    }
    if (sumM > sumN){
        printf("%d", sumM);
    }
    return 0;
}