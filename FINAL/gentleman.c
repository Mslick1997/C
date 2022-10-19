#include <stdio.h>
#include <string.h>

void main(){
    int N; scanf("%d", &N);
    char FM[1000];
    int i, keb[1000], kar[1000];
    int i2 = 0, i3 = 0, i4 = 0;
    int cnt = 0, sum = 0;
    scanf("%s", FM);
    for (i4 = 0 ; i4 < N ; i4++){
        i2 = 0, i3 = 0;
        for (i = 0 ; i < N ; i++){
            if (FM[i] == 'M'){
                if (FM[i + 1] == 'F'){
                    keb[i2] = i, kar[i3] = i + 1;
                    i2++, i3++;
                    cnt++;
                    //printf("(%d)", cnt);
                }
            }
        }
        for (i2 = 0, i3 = 0 ; i2 < cnt ; i2++, i3++){
            FM[keb[i2]] = 'F';
            FM[kar[i3]] = 'M';
            //printf("(%c %c %c %c)", FM[0], FM[1], FM[2], FM[3]);
            if (i2 == cnt - 1){
                sum++;
            }
        }
        cnt = 0;
    }
    printf("%d", sum);
}