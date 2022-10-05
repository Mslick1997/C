#include <stdio.h>

int main(){
    int N; scanf("%d", &N);
    int K[N];
    int kebkar[N][10];
    int i;
    for (i = 0 ; i < N ; i++){
        scanf("%d", &K[i]);
    }
    int r, c;
    for (r = 0 ; r < N ; r++){
        for (c = 0 ; c < 10 ; c++){
            kebkar[r][c] = 0;
        }
    }
    i = 0;
    for (r = 0 ; r < N ; r++){
        for (c = 0 ; c < 10 ; c++){
            if (c == K[i]){
                kebkar[r][c] = 1;
                i++;
                break;
            }
        }
    }
    for (r = 0 ; r < N ; r++){
        for (c = 0 ; c < 10 ; c++){
            printf("%d ", kebkar[r][c]);
        }
        printf("\n");
    }
    return 0;
}