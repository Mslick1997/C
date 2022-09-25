#include <stdio.h>

int N[1000000];
int pp[10000]; 

void main(){
    int cnt = 0, koko = 0;
    int i3 = 0;
    //*MAKE ARRAY pp[10K] = 0;
    for (int i = 0 ; i < 10000 ; i++){
        pp[i] = 0;
    }
    //*INPUT
    for (int i = 0 ; i < 1000000 ; i++){
        scanf("%d", &N[i]);
        if (N[i] <= 0){
            break;
        }
        //*CHECK WA NAI ARRAY pp[10K] KOEY RUB LAKE
        //*N[i] MA MAI
        for (int i2 = 0 ; i2 < 10000 ; i2++){
            if (pp[i2] == N[i]){
                koko++;
            }
        }
        if (koko == 0){
            pp[i3] = N[i];
            i3++;
        }
        koko = 0;
        cnt++;
    }
    //*OUTPUT
    printf("%d\n%d\n", cnt, i3);
    for (int i = 0 ; i < i3 ; i++){
        printf("%d", pp[i]);
        if (i == i3 - 1){
            break;
        }
        printf(" ");
    }
}