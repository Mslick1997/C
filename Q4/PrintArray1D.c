#include <stdio.h>

int main(){
    int N; scanf("%d", &N);
    int pp[10000];
    int X;
    for (int i = 0 ; i < N ; i++){
        scanf("%d", &pp[i]);
    }
    scanf("%d", &X);
    for (int i = 0 ; i < N ; i += X){
        printf("%d ", pp[i]);
    }
    return 0;
}