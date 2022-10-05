#include <stdio.h>

void main(){
    int N; scanf("%d", &N);
    int pp[50001];
    int cc[50001];
    int i, i2 = 0;
    int i3 = 0;
    int cnt = 0;
    int cntNum = 0;
    for (i = 0 ; i < N ; i++){
        scanf("%d", &pp[i]);
        for (i2 = 0 ; i2 < N ; i2++){
            if (cc[i2] == pp[i]){
                cnt++;
            }
        }
        if (cnt == 0){
            cc[i3] = pp[i];
            i3++;
        }
        cnt = 0;
    }
    int kebkar[i3];
    for (i = 0 ; i < i3 ; i++){
        for (i2 = 0 ; i2 < N ; i2++){
            if (cc[i] == pp[i2]){
                cntNum++;
            }
        }
        kebkar[i] = cntNum;
        cntNum = 0;
    }
    printf("%d\n", i3);
    for (i = 0 ; i < i3 ; i++){
        printf("%d %d\n", cc[i], kebkar[i]);
    }
}