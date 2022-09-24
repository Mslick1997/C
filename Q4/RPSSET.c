#include <stdio.h>

void main(){
    int N; scanf("%d", &N);
    int first[5000], second[5000];
    int i;
    int cntF = 0, cntS = 0;
    if (N >= 2 && N <= 5000){
        for (i = 0 ; i < N ; i++){
            scanf("%d", &first[i]);
        }
        for (i = 0 ; i < N ; i++){
            scanf("%d", &second[i]);
        }
        for (i = 0 ; i < N ; i++){
            if (first[i] == 1 && second[i] == 3 ||
                first[i] == 2 && second[i] == 1 ||
                first[i] == 3 && second[i] == 2){
                cntF++;
            }
            if (first[i] == 3 && second[i] == 1 ||
                first[i] == 1 && second[i] == 2 ||
                first[i] == 2 && second[i] == 3){
                cntS++;
            }
        }
        if (cntF > cntS){
            printf("%d %d\n1", cntF, cntS);
        }
        else if (cntF < cntS){
            printf("%d %d\n2", cntF, cntS);
        }
        else {
            printf("%d %d\n0", cntF, cntS);
        }
    }
}
