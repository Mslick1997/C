#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

struct Sdata{
    char ID[9];
    char FirstName[100];
    char LastName[100];
    double Grade; 
} typedef student;

void main(){
    int N; scanf("%d", &N);
    int i;
    double max = INT_MIN;
    int ans;
    student* emp = (student*)malloc(N * sizeof(student));
    for (i = 0 ; i < N ; i++){
        scanf("%s", emp[i].ID);
        scanf("%s", emp[i].FirstName);
        scanf("%s", emp[i].LastName);
        scanf("%lf", &emp[i].Grade);
    }
    for (i = 0 ; i < N ; i++){
        if (max <= emp[i].Grade){
            max = emp[i].Grade;
            ans = i;
        }
    }
    printf("%s ", emp[ans].ID);
    printf("%s ", emp[ans].FirstName);
    printf("%s ", emp[ans].LastName);
    printf("%.2lf", emp[ans].Grade);
}