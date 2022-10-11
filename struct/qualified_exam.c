#include <stdio.h>
#include <string.h>

struct data{
    char ID[6];
    int score;
} typedef based;

void main(){
    int N; scanf("%d", &N);
    int i, cnt = 0;
    double sum = 0, avg;
    based emp[N];
    for (i = 0 ; i < N ; i++){
        scanf("%s %d", emp[i].ID, &emp[i].score);
        sum += emp[i].score;
    }
    avg = sum / N;
    for (i = 0 ; i < N ; i++){
        if (emp[i].score > avg){
            cnt++;
        }
    }
    printf("%d\n", cnt);
    for (i = 0 ; i < N ; i++){
        if (emp[i].score > avg){
            printf("%s\n", emp[i].ID);
        }
    }
}