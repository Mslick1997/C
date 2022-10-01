#include <stdio.h>

int main(){
    int x; scanf("%d", &x);
    int ans;
    if (x >= 10){
        ans = x % 100;
        ans = ans / 10;
        printf("%d", ans);
    }
    else if (x < 10){
        printf("0");
    }
    return 0;
}