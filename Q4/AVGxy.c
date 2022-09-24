#include <stdio.h>

void main(){
    int N; scanf("%d", &N);
    int pa[100000];
    int i;
    double sum = 0;
    int cnt = 0;
    for (i = 0 ; i < N ; i++){
        scanf("%d", &pa[i]);
    }
    int X, Y; scanf("%d%d", &X, &Y);
    for (i = 0 ; i < N ; i++){
        if (pa[i] >= X && pa[i] <= Y){
            sum += pa[i];
            cnt++;
        }
    }
    sum /= cnt;
    if (cnt > 0) printf("%d\n%.2lf", cnt, sum);
    if (cnt == 0) printf("%d\nnone", cnt);
}
