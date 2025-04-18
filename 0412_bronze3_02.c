#include <stdio.h>
#include <stdlib.h>

int main(void){
    int check[30]={0};
    char input[10];
    int buffer;

    while(fgets(input, sizeof(input), stdin)){
        if(input[0]=='\n')
            break;
        int num = atoi(input);
        check[(num-1)] = 1;
    }

    for(int i = 0; i < 30; i++){
        if(check[i]==0)
            printf("%d\n", (i+1));
    }
    return 0;
}