#include <stdio.h>

struct number{
    int pp[100];
} typedef num;

void main(){
    int N; scanf("%d", &N);
    int i, i2;
    int cnt = 0;
    int C[N];
    num emp[N];
    //int pp[99999];
    for (i = 0 ; i < N ; i++){
        for (i2 = 0;;i2++){
            scanf("%d", &emp[i].pp[i2]);
            if (emp[i].pp[i2] == 0){
                break;
            }
            cnt++;
        }
        C[i] = cnt;
        cnt = 0;
        //printf("%d ", C[i]);
    }
    for (i = 0 ; i < N ; i++){
        for (int i3 = 0 ; i3 < C[i] - 2 ; i3++){
            if (emp[i].pp[i3 + 1] < emp[i].pp[i3]
            && emp[i].pp[i3 + 1] < emp[i].pp[i3 + 2]){
                printf("min %d ", emp[i].pp[i3 + 1]);
            }
            if (emp[i].pp[i3 + 1] > emp[i].pp[i3]
            && emp[i].pp[i3 + 1] > emp[i].pp[i3 + 2]){
                printf("max %d ", emp[i].pp[i3 + 1]);
            }
        }
        printf("\n");
    }
}