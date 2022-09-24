#include <stdio.h>

int average(int pp[50000], int N){
    int i;
    int sum = 0;
    for (i = 1 ; i <= N ; i++){
        sum += pp[i];
    }
    sum /= N;
    return sum;
}

void main(){
    int N; scanf("%d", &N);
    int i, cntMAK = 0, cntNOI = 0, cntTAO = 0;
    int avg;
    int pp[50000];
    for (i = 1 ; i <= N ; i++){
        scanf("%d", &pp[i]);
    }
    avg = average(pp, N);
    for (i = 1 ; i <= N ; i++){
        if (pp[i] > avg){
            cntMAK++;
        }
        if (pp[i] < avg){
            cntNOI++;
        }
        if (pp[i] == avg){
            cntTAO++;
        }
    }
    printf("%d\n", avg);
    printf("%d %d %d", cntMAK, cntNOI, cntTAO);
}