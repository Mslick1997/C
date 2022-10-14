#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book_data{
    int book_id;
    char book_name[500];
    int sell_price;
    int base_price;
} typedef BD;

void main(){
    BD* book = (BD*)malloc(5000 * sizeof(BD));
    int N; scanf("%d\n", &N);
    int i;
    for (i = 0 ; i < N ; i++){
        gets(book[i].book_name);
        printf("%s\n", book[i].book_name);
    }
}