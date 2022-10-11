#include <stdio.h>

void main(){
    int M, N; scanf("%d %d", &M, &N);
    int pp[M][N];
    int r, c;
    int x, y;
    int sum = 0;
    for (r = 0 ; r < M ; r++){
        for (c = 0 ; c < N ; c++){
            scanf("%d", &pp[r][c]);
        }
    }
    scanf("%d %d", &x, &y);
    for (c = 0 ; c < N ; c++){
        sum = sum + (pp[x - 1][c] * pp[y - 1][c]);
        //printf("(%d %d)", pp[x - 1][c], pp[y - 1][c]);
    }
    printf("%d", sum);
}