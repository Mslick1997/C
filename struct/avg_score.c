#include <stdio.h>\

void main(){
    int N; scanf("%d", &N);
    int num[N];
    int i; 
    double sum = 0;
    for (i = 0 ; i < N ; i++){
        scanf("%d", &num[i]);
        sum += num[i];
    }
    sum /= N;
    printf("%.6lf", sum);
}