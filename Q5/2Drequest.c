#include <stdio.h>
#include <limits.h>

void main(){
    int N; scanf("%d", &N);
    int r, c;
    int r2, c2;
    int pp[N][N];
    int cnt = 0;
    int max = INT_MIN, min = INT_MAX;
    for (r = 0 ; r < N ; r++){
        for (c = 0 ; c < N ; c++){
            scanf("%d", &pp[r][c]);
        }
    }
    scanf("%d %d", &r2, &c2);
    for (r = 0 ; r < N ; r += r2){
        for (c = 0 ; c < N ; c += c2){
            printf("%d ", pp[r][c]);
            cnt++;
            if (max <= pp[r][c]){
                max = pp[r][c];
            }
            if (min >= pp[r][c]){
                min = pp[r][c];
            }
        }
        printf("\n");
    }
    printf("%d\n%d\n%d", cnt, max, min);
}