#include <stdio.h>

int main(){
    int student, score; scanf("%d%d", &student, &score);
    int i, i2;
    int sExam[score][student];
    int sum;
    for (i = 0 ; i < score ; i++){
        for (i2 = 0 ; i2 < student ; i2++){
            scanf("%d", &sExam[i][i2]);
        }
    }
    int tanny = 0;
    int S[score];
    int r;
    int panyanat[score];
    int c = 0;
    double kebkar = 0;
    double avg;
    for (r = 0 ; r < student ; r++){
        for (i = 0 ; i < score ; i++){
            for (i2 = 0 ; i2 < student ; i2++){
                if (i2 == tanny){
                    sum += sExam[i][i2];
                    if (c < score){
                        printf("%d ", sum);
                        c++;
                    }
                }

            }
        }
        printf("%d\n", sum);
        kebkar += sum;
        panyanat[r] = sum;
        tanny++;
        sum = 0;
        c = 0;
    }
    int pass = 0;
    int peopleP[student];
    avg = kebkar / student; 
    for (r = 0 ; r < student ; r++){
        if (panyanat[r] >= avg){
            peopleP[pass] = r + 1;
            pass++;
        }
    }
    printf("average = %.2lf\n", avg);
    printf("pass = %d\n", pass);
    for (i = 0 ; i < pass ; i++){
        printf("%d", peopleP[i]);
        if (i == pass - 1){
            break;
        }
        printf(" ");
    }
    return 0;
}