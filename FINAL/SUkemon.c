#include <stdio.h>

void main(){
    int N; scanf("%d", &N);
    int i, i2;
    int cnt1 = 0, cnt2 = 0;
    int CP1[100000], CP2[100000];
    for (i = 0 ; i < N ; i++) {scanf("%d", &CP1[i]);}
    for (i = 0 ; i < N ; i++) {scanf("%d", &CP2[i]);}
    i = 0, i2 = 0;
    while (i < N){
        if (CP1[i] < CP2[i2]){
            //printf("(%d - %d)", CP2[i2], CP1[i]);
            printf("2\n");
            CP2[i2] = CP2[i2] - CP1[i];
            cnt1++;
            i++;
        }
        else if (CP1[i] > CP2[i2]){
            //printf("(%d - %d)", CP1[i], CP2[i2]);
            printf("1\n");
            CP1[i] = CP1[i] - CP2[i2];
            cnt2++;
            i2++;
        }
        else if (CP1[i] == CP2[i2]){
            //printf("(%d - %d)", CP1[i], CP2[i2]);
            printf("0\n");
            i++, i2++;
            cnt1++, cnt2++;
        }
        if (cnt1 == N || cnt2 == N){
            break;
        }
    }
}