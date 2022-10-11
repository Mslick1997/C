#include <stdio.h>
#include <math.h>

void main(){
    int N; scanf("%d", &N);
    int sum = 10;
    int i = 1;
    while (i < N){
        sum = sum * 10;
        i++;
    }
    if (N == 0){
        sum = 1;
    }
    printf("%d", sum);
}
