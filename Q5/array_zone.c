#include <stdio.h>

int RC[1000][1000];

void main(){
    int N, K; scanf("%d%d", &N, &K);
    int r = 0, c = 0;
    int sum = 0;
    int ans[10];
    int i = 1, i2 = 0, i3 = 0;
    for (r = 0 ; r < N ; r++){
        for (c = 0 ; c < K ; c++){
            scanf("%d", &RC[r][c]);
        }
    }
    for (r = 0 ; r < N ; r++){
        for (c = 0 ; c < K / 2 ; c++){
            sum += RC[r][c];
        }
        if (r == i){
            printf("%d ", sum);
            sum = 0;
            i += 2;
        }
    }
}