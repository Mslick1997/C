#include <stdio.h>

int number[1000000];
int N[1000000];
int ans[1000000];

void main(){
    int i = 1, i2 = 1;
    int cnt = 0, cnt1 = 0, koko = 0;
    for (i = 1 ; i <= 1000000 ; i++){
        N[i] = 0;
    }
    for (i = 1 ; i <= 1000000 ; i++){
        scanf("%d", &number[i]);
        if (number[i] <= 0){
            break;
        }
        N[number[i]] = number[i];
        cnt++;
    }
    for (i = 1 ; i <= 1000000 ; i++){
        if (N[i] != 0){
            N[i] = N[i];
            cnt1++;
        }
    }
    printf("%d\n%d\n", cnt, cnt1);
}