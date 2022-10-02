#include <stdio.h>

int main(){
    int N; scanf("%d", &N);
    int tanN = N;
    int pp[200][200];
    int koko[200][200];
    int r, c;
    int i = 0, i2 = 0;
    for (r = 0 ; r < N ; r++){
        for (c = 0 ; c < N ; c++){
            scanf("%d", &pp[r][c]);
        }
    }
    int D; scanf("%d", &D);
    if (D == 1){
        for (r = 0 ; r < N ; r++){
            for (c = N / 2 ; c < N ; c++){
                koko[i][i2] = pp[r][c];
                i2++;
                //printf("(%d)", koko[r][c]);
            }
            i2 = 0;
            i++;
        }
        i = 0, i2 = N / 2;
        for (r = 0 ; r < N ; r++){
            for (c = 0 ; c < N / 2 ; c++){
                koko[i][i2] = pp[r][c];
                i2++;
                //printf("(%d)", koko[r][c]);
            }
            i2 = N / 2;
            i++;
        }
        for (r = 0 ; r < N ; r++){
            for (c = 0 ; c < N ; c++){
                printf("%d ", koko[r][c]);
            }
            printf("\n");
        }
    }
    else if (D == 2){
        i = 0, i2 = 0;
        for (r = N / 2 ; r < N ; r++){
            for (c = 0 ; c < N ; c++){
                koko[i][i2] = pp[r][c];
                i2++;
            }
            i2 = 0;
            i++;
        }
        i = N / 2, i2 = 0;
        for (r = 0 ; r < N / 2 ; r++){
            for (c = 0 ; c < N ; c++){
                koko[i][i2] = pp[r][c];
                i2++;
            }
            i2 = 0;
            i++;
        }
        for (r = 0 ; r < N ; r++){
            for (c = 0 ; c < N ; c++){
                printf("%d ", koko[r][c]);
            }
            printf("\n");
        }
    }
    return 0;
}