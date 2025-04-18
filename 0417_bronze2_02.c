#include <stdio.h>

int main(void){
    int N, M;
    scanf("%d %d", &N, &M);
    int basket[N+1];
    for (int i = 0; i <= N; i++)
        basket[i] = i;
    
    int start, end, temp;
    for (int i = 0; i < M; i++){
        scanf("%d %d", &start, &end);
        temp = basket[start];
        basket[start] = basket[end];
        basket[end] = temp;
    }
    for(int j = 1; j <= N; j++)
        printf("%d ", basket[j]);
    
    return 0;
}