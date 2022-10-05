#include <stdio.h>

int number[1000][1000];

int main(){
    int M, N; scanf("%d %d", &M, &N);
    int r, c;
    int i = 1, i2 = 0;
    for (r = 0 ; r < M ; r++){
        for (c = 0; c < N ; c++){
            scanf("%d", &number[r][c]);
        }
    }
    int K; scanf("%d", &K);
    for (r = 0 ; r < M ; r++){
        if (r % 2 == 0){
            i = 1;
        }
        else if (r % 2 != 0){
            i = 0;
        }
        for (c = 0 ; c < N ; c++){
            if (c == i){
                number[r][c] = number[r][c] + K;
                i += 2;
            } 
            printf("%d ", number[r][c]);
        }
        printf("\n");
    }
    return 0;
}