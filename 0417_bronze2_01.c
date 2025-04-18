#include <stdio.h>
#include <string.h>

int main(void){
    int number;
    int remain;
    int check[42] = {0};
    // char input[10];
    int output = 0;

    while(scanf("%d", &number) != EOF){
        remain = number%42;
        check[remain] += 1;
    }

    for(int i=0; i<42; i++){
        if(check[i] != 0)
            output++;
    }

    printf("%d", output);
    return 0;
}