#include <stdio.h>
#include <stdlib.h>

int main(){
    int N; scanf("%d", &N);
    int* number = (int*)malloc(N * sizeof(int*));
    int i;
    for (i = 1 ; i <= N ; i++){
        scanf("%d", &number[i]);
    }

    int S, R; scanf("%d%d", &S, &R);
    int kebkar = 1;
    for (i = 1 ; kebkar <= S+R ; i++){
        if (i > N){
            i = 1;
        }
        kebkar++;
    }
    printf("%d", number[i - 1]);
    return 0;
}