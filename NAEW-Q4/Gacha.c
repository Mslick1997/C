#include <stdio.h>
#include <stdlib.h>

int main(){
    int N; scanf("%d", &N);
    int* item = (int*)malloc(1000 * sizeof(int));
    int i = 1, i2 = 1, cnt = 0;
    double S = 0;
    double pc[N];
    for (;;){
        scanf("%d", &item[i]);
        if (item[i] == 0){
            break;
        }
        i++;
    }
    cnt = i - 1;
    for (i2 = 1 ; i2 <= N ; i2++){
        for (i = 1 ; i <= cnt ; i++){
            if (i2 == item[i]){
                S++;
            }
        }
        pc[i2] = (S / cnt) * 100;
        S = 0;
    }
    for (i = 1 ; i <= N ; i++){
        printf("%.2lf%%\n", pc[i]);
    }
    return 0;
}
