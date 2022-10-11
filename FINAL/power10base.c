#include <stdio.h>

void main(){
    int N; scanf("%d", &N);
    int i = 10, i2 = 1, x, y;
    while (i2 <= 7){
        if (N % i < N){
            x = N;
            x %= i;
            while (x >= 10){
                x /= 10;
            }
            printf("%d x %d\n", x, i / 10);
            i *= 10;
        }
        i2++;
    }
    N /= (i / 10);
    printf("%d x %d\n", N, i / 10);
}
