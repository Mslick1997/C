#include <stdio.h>
#include <limits.h>

void main(){
    int N; scanf("%d", &N);
    int pp[100000];
    int i;
    for (i = 0 ; i < N ; i++){
        scanf("%d", &pp[i]);
    }
    int K; scanf("%d", &K);
    int sum[100000];
    int min = INT_MAX, min2 = INT_MAX;
    int noi[100000];
    int cnt = 0;
    for (i = 0 ; i < N ; i++){
        if (K >= pp[i]){
            sum[i] = K - pp[i];
        }
        else if (K < pp[i]){
            sum[i] = pp[i] - K;
        }
    }
    for (i = 0 ; i < N ; i++){
        if (min >= sum[i]){
            min = sum[i];
            //printf("%d", min);
        }
    }
    for (i = 0 ; i < N ; i++){
        if (sum[i] == min){
            cnt++;
        }
    }
    printf("%d\n%d", min, cnt);
}
