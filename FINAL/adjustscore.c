#include <stdio.h>

void main(){
    int N; scanf("%d", &N);
    int MAX, X, i;
    double score[N];
    double sum = 0;
    for (i = 0 ; i < N ; i++){
        scanf("%lf", &score[i]);
    }
    scanf("%d %d", &MAX, &X);
    for (i = 0 ; i < N ; i++){
        sum = (score[i] * X) / MAX;
        printf("%.1lf ", sum);
    }
}