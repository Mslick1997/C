#include <stdio.h>

char flag[100][100];

int main(){
    int N; scanf("%d", &N);
    int r, c;
    int i = 1, i2 = 2, i3 = 1, i4 = 3, i5 = 2, i6 = 2;
    for (r = 0 ; r < N ; r++){
        for (c = 0 ; c < N ; c++){
            flag[r][c] = ' ';
        }
    }
    for (r = 0 ; r < N ; r++){
        for (c = 0 ; c < N ; c++){
            //*STROKE
            if (r == 0 || r == N - 1 || c == 0 || c == N - 1){
                flag[r][c] = '*';
            }
            //*PLUS
            if (c == N / 2 || c == (N / 2) + 1 || c == (N / 2) + 2 || c == (N / 2) - 1 || c == (N / 2) - 2){
                flag[r][c] = '*';
            }
            if (r == N / 2 || r == (N / 2) + 1 || r == (N / 2) + 2 || r == (N / 2) - 1 || r == (N / 2) - 2){
                flag[r][c] = '*';
            }
            //*X (\)
            if (r == c || r - c == 1 || c - r == 1){
                flag[r][c] = '*';
            }
            //*X (/)
            if (r == i && c == N - i2){
                flag[r][c] = '*';
                i++;
                i2++;
            }
            if (r == i3 && c == N - i4){
                flag[r][c] = '*';
                i3++;
                i4++;
            }
            if (r == i5 && c == N - i6){
                flag[r][c] = '*';
                i5++;
                i6++;
            }
            //*OUTPUT
            printf("%c", flag[r][c]);
            if (c == N - 1){
                printf("\n");
            }
        }
    }
    return 0;
}
