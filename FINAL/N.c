#include <stdio.h>

void main(){
    int N; scanf("%d", &N);
    int r, c;
    int i = 1, i2 = 2;
    int pp[N][(N * 2) - 1];
    int kebkar = ((N * 2) - 1) % 10;
    int sum;
    for (r = 0 ; r < N ; r++){
        for (c = 0 ; c < (N * 2) - 1 ; c++){
            pp[r][c] = -1;
        }
    }
    for (r = 0 ; r < N ; r++){
        for (c = 0 ; c < (N * 2) - 1 ; c++){
            if (c == 0){
                sum = (N - r) % 10;
                pp[r][c] = sum;
            }
            if (c == (N * 2) - 2){
                sum = (kebkar + (N - (r + 1))) % 10;
                pp[r][c] = sum;
            }
            if (r == i && c == i2){
                sum = (N + r) % 10;
                pp[r][c] = sum;
                i2 += 2;
                i++;
            }
            if (pp[r][c] >= 0){
                printf("%d", pp[r][c]);
            }
            if (pp[r][c] < 0){
                printf(" ");
            }
            if (c == (N * 2) - 2){
                printf("\n");
            }
        }
    }
}