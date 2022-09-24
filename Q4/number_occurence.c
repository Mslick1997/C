#include <stdio.h>

int pp[2500000];

int main(){
    int N; scanf("%d", &N);
    int sonjai;
    int i, cnt = 0;
    for (i = 0 ; i < N ; i++){
        scanf("%d", &pp[i]);
    }
    scanf("%d", &sonjai);
    for (i = 0 ; i < N ; i++){
        if (pp[i] == sonjai){
            printf("%d ", i + 1);
            cnt++;
        }
    }
    if (cnt == 0){
        printf("0");
    }
    return 0;
}