#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book_data{
    int book_id;
    char book_name[50];
    int sell_price;
    int base_price;
} typedef BD;

struct buy_or_ask{
    int BoA;
    int id;
} typedef LIB;

void main(){
    int N; scanf("%d", &N);
    BD* book = (BD*)malloc(5000 * sizeof(BD));
    LIB* want = (LIB*)malloc(50000 * sizeof(LIB));
    int i, i2;
    int P;
    int kebkar[5000], Q_pariman[50000];
    int cnt = 0;
    for (i = 0 ; i < N ; i++){
        kebkar[i] = 0;
        scanf("%d\n", &book[i].book_id);
        gets(book[i].book_name);
        int nameLength = strlen(book[i].book_name);
        book[i].book_name[nameLength - 1] = 0;
        scanf("%d", &book[i].sell_price);
        scanf("%d", &book[i].base_price);
    }
    scanf("%d", &P);
    for (i = 0 ; i < P ; i++){
        scanf("%d", &want[i].BoA);
        scanf("%d", &want[i].id);
        if (want[i].BoA == 1){
            scanf("%d", &Q_pariman[i]);
        }
    }
    for (i = 0 ; i < P ; i++){
        if (want[i].BoA == 1){
            for (i2 = 0 ; i2 < N ; i2++){
                if (want[i].id == book[i2].book_id){
                    kebkar[i2] += Q_pariman[i];
                }
            }
        }
        if (want[i].BoA == 2){
            for (i2 = 0 ; i2 < N ; i2++){
                if (want[i].id == book[i2].book_id){
                    printf("%d ", book[i2].book_id);
                    printf("%s ", book[i2].book_name);
                    printf("%d ", kebkar[i2]);
                    printf("%d ", kebkar[i2] * book[i2].sell_price);
                    printf("%d",
                    (kebkar[i2] * book[i2].sell_price)
                    - (kebkar[i2] * book[i2].base_price));
                    cnt++;
                    if (i == P - 1){
                        break;
                    }
                    printf("\n");
                }
            }
            //printf("(%d)", cnt);
            if (cnt == 0){
                printf("Error");
                if (i == P - 1){
                    break;
                }
                printf("\n");
            }
            cnt = 0;
        }
    }
}