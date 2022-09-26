#include <stdio.h>

int RC[1000][1000];

void main(){
    int N, K; scanf("%d%d", &N, &K);
    int r = 0, c = 0;
    int sum = 0;
    int ans[10];
    int i = 0, i2 = 0, i3 = 0;
    for (r = 0 ; r < N ; r++){
        for (c = 0 ; c < K ; c++){
            scanf("%d", &RC[r][c]);
        }
    }
    for (i = 0 ; i < 2 ; i++){
        while (r < N / 2){
            printf("%d", r);
            while (c < K / 2){
                sum += RC[r][c];
                c++;
            }
            printf("(%d)", sum);
            c = 0;
            sum = 0;
            r++;
        }
        i2 += 2;
        i3 += 2;
        N += 2;
        K += 2;
    }
}