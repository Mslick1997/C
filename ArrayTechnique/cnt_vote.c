#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
    int N, K; scanf("%d%d", &N, &K);
    int* ppeople = (int*)malloc(K * sizeof(int));
    int ans[N + 1], kondai;
    int i, i2;
    int cnt = 0;
    int max = INT_MIN;
    for (i = 0 ; i < K ; i++){
        scanf("%d", &ppeople[i]);
    }
    for (i = 1 ; i <= N ; i++){
        for (i2 = 0 ; i2 < K ; i2++){
            if (ppeople[i2] == i){
                cnt++;
            }
        }
        ans[i] = cnt;
        cnt = 0;
    }
    for (i = 1 ; i <= N ; i++){
        if (max < ans[i]){
            max = ans[i];
            kondai = i;
        }
    }
    printf("%d\n%d", kondai, max);
    return 0;
}