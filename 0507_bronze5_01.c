#include <stdio.h>
#define MAX_STR 101

int main(void){
    char in[MAX_STR];
    int i = 0;

    scanf("%s", in);

    while(in[i] != '\0')
        i++;
    
    printf("%d", i);
    return 0;
}