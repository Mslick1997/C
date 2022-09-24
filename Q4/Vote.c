#include <stdio.h>
#include <limits.h>

//*MAIN VOID
//TODO MAKE SURE?
//MAIN
int main(){
    int N, K; scanf("%d %d", &N, &K);
    int TUU[300], vote, who;
    int i, max = INT_MIN;
    for (i = 1 ; i <= N ; i++){
        TUU[i] = 0;
    }
    for (i = 1 ; i <= K ; i++){
        scanf("%d", &vote);
        TUU[vote] += 1;
    }
    for (i = 1 ; i <= N ; i++){
        if (max < TUU[i]){
            max = TUU[i];
            who = i;
        }
    }
    printf("%d\n%d", who, max);
    return 0;
}