#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pokemon_Data{
    int ID;
    char Name[100];
    int Power[9];
} typedef Poke;

int main(){
    int N; scanf("%d", &N);
    int i;
    Poke* emp = (Poke*)malloc(N * sizeof(Poke));
    for (i = 0 ; i < N ; i++){
        scanf("%d", &emp[i].ID);
        scanf("%s", emp[i].Name);
        for (int i3 = 1 ; i3 <= 8 ; i3++){
            scanf("%d", &emp[i].Power[i3]);
        }
    }
    int K; scanf("%d", &K);
    int* aidee = (int*)malloc(K * sizeof(int));
    int* level = (int*)malloc(K * sizeof(int));
    for (i = 0 ; i < K ; i++){
        scanf("%d%d", &aidee[i], &level[i]);
    }
    for (i = 0 ; i < K ; i++){
        for (int i2 = 0 ; i2 < N ; i2++){
            if (aidee[i] == emp[i2].ID){
                printf("%s %d\n", emp[i2].Name, emp[i2].Power[level[i]]);
            }
        }
    } 
    return 0;
}