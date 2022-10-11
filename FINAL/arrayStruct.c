#include <stdio.h>
#include <string.h>

struct Nation_Data{
    int ID;
    char Name[20];
    int infected;
    int died;
} typedef ND;

void main(){
    int N; scanf("%d", &N);
    int i, i2 = 0, ID_want[200];
    ND data[N];
    for (i = 0 ; i < N ; i++){
        scanf("%d", &data[i].ID);
        scanf("%s", &data[i].Name);
        scanf("%d", &data[i].infected);
        scanf("%d", &data[i].died);
    }
    while (1){
        scanf("%d", &ID_want[i2]);
        if (ID_want[i2] == 0){
            break;
        }
        i2++;
    }
    for (i = 0 ; i < i2 ; i++){
        for (int i3 = 0 ; i3 < N ; i3++){
            if (ID_want[i] == data[i3].ID){
                printf("%s ", data[i3].Name);
                printf("%d ", data[i3].infected);
                printf("%d\n", data[i3].died);
            }
        }
    }
}