#include <stdio.h>

int main(void){
    int num[9];
    int MAX = 0;
    int count = 0;
    for(int i = 0; i < 9; i++){
        scanf("%d", &num[i]);
        if(num[i] > MAX){
            count = i+1;
            MAX = num[i];
        }
    }
    printf("%d\n%d", MAX, count);
    return 0;
}