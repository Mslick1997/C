#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
    int N; scanf("%d", &N);
    int* number = (int*)malloc(N * sizeof(int));
    int i;
    int max = INT_MIN;
    for (i = 0 ; i < N ; i++){
        scanf("%d", &number[i]);
        if (max <= number[i]){
            max = number[i];
        }
    }
    for (max ; max > 0 ; max--){
        for (int i2 = 0 ; i2 < N ; i2++){
            if (number[i2] < max){
                printf(" ");
            }
            else if (number[i2] >= max){
                printf("*");
            }
            if (i2 == N - 1){
                printf("\n");
            }
        }
    }
    return 0;
}