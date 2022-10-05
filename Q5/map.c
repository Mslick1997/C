#include <stdio.h>
#include <string.h>

void main(){
    int M, N; scanf("%d%d", &M, &N);
    int K; scanf("%d", &K);
    char RC[M + 1][N + 1];
    int P[K + 1], S[K + 1];
    int r, c;
    int i;
    for (r = 1 ; r <= M ; r++){
        for (c = 1 ; c <= N ; c++){
            RC[r][c] = '_';
        }
    }
    for (i = 1 ; i <= K ; i++){
        scanf("%d%d", &P[i], &S[i]);
        RC[P[i]][S[i]] = 'x';
    }
    
    //*OUTPUT
    for (r = 1 ; r <= M ; r++){
        for (c = 1 ; c <= N ; c++){
            printf("%c", RC[r][c]);
        }
        printf("\n");
    }
}