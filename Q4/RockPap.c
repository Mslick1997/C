#include <stdio.h>

void main(){
    int F, S; scanf("%d%d", &F, &S);
    if (F == 1 && S == 3 || F == 2 && S == 1 || F == 3 && S == 2) printf("1");
    if (F == 3 && S == 1 || F == 1 && S == 2 || F == 2 && S == 3) printf("2");
    if (F == 1 && S == 1 || F == 2 && S == 2 || F == 3 && S == 3) printf("0");
}
