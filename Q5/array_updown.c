#include <stdio.h>

int RC[1000][1000];

void main(){
    int K; scanf("%d", &K);
    int r, c;
    int sumUP = 0, sum = 0, sumDN = 0;
    int i = 0, i2 = 0;
    for (r = 0 ; r < K ; r++){
        for (c = 0 ; c < K ; c++){
            scanf("%d", &RC[r][c]);
        }
    }
    for (r = 0 + i ; r < K ; r++){
        for (c = 1 + i2 ; c < K ; c++){
            if (r != c){
                sumUP += RC[r][c];
            }
        }
        i++;
        i2++;
    }
    for (r = 0; r < K ; r++){
        for (c = 0; c < K ; c++){
            if (r != c){
                sum += RC[r][c];
            }
        }
    }
    sumDN = sum - sumUP;
    printf("%d\n%d",sumUP, sumDN);

}