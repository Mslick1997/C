#include <stdio.h>
#include <string.h>

struct SData {
    char ID[9];
    char name[31];
    char Lname[51];
    int year;
} typedef student;

void main(){
    int N; scanf("%d", &N);
    int i;
    int y;
    int cnt = 0;
    student emp[N];
    for (i = 0 ; i < N ; i++){
        scanf("%s", emp[i].ID);
        scanf("%s", emp[i].name);
        scanf("%s", emp[i].Lname);
        scanf("%d", &emp[i].year);
    }
    scanf("%d", &y);
    for (i = 0 ; i < N ; i++){
        if (y == emp[i].year){
            printf("%s ", emp[i].ID);
            printf("%s ", emp[i].name);
            printf("%s", emp[i].Lname);
            printf("\n");
            cnt++;
        }
    }
    if (cnt == 0){
        printf("None");
    }
}