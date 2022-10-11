#include <stdio.h>

int N[1000000];
int pp[1000000]; 

void main(){
    int cnt = 0, koko = 0;
    int i3 = 0;
    //*INPUT
    for (int i = 0 ; i < 1000000 ; i++){
        scanf("%d", &N[i]);
        if (N[i] <= 0){
            break;
        }
        //*CHECK WA NAI ARRAY pp[10K] KOEY RUB LAKE
        //*N[i] MA MAI
        for (int i2 = 0 ; i2 < 1000000 ; i2++){
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
    printf("%d\n", cnt);
}