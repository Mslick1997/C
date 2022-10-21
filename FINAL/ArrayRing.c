#include <stdio.h>

void main(){
    int N; scanf("%d", &N);
    int pp[N][N];
    int r, c;
    int sum = 0;
    int p;
    for (r = 0 ; r < N ; r++){
        for (c = 0 ; c < N ; c++){
            scanf("%d", &pp[r][c]);
        }
    }
    printf("%d\n", pp[N / 2][N / 2]);
    for (p = 1 ; p <= N / 2 ; p++){
        for (r = 0 ; r < N ; r++){
            for (c = 0 ; c < N ; c++){ 
                if (r == (N / 2) - p && c <= (N / 2) + p 
                && c >= (N / 2) - p || r == (N / 2) + p 
                && c >= (N / 2) - p && c <= (N / 2) + p){
                    sum += pp[r][c];
                }
                if (r > (N / 2) - p && r < (N / 2) + p
                && c == (N / 2) - p || c == (N / 2) + p
                && r > (N / 2) - p && r < (N / 2) + p){
                    sum += pp[r][c];
                }
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }
}