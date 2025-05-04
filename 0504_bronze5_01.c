#include <stdio.h>

#define MAX_STR 1000

int main (void){
    char STR[MAX_STR];
    int position;

    scanf("%s", STR);
    scanf("%d", &position);

    printf("%c", STR[position-1]);
    return 0;
}