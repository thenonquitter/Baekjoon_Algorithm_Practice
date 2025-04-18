#include <stdio.h>

int main(void){
    int N, M;
    scanf("%d %d", &N, &M);
    int basket[N+1];
    for (int i = 0; i <= N; i++)
        basket[i] = 0;
    int start, end, num_ball;

    for (int i = 0; i < M; i++){
        scanf("%d %d %d", &start, &end, &num_ball);
        for(int j = start; j <= end; j++)
            basket[j] = num_ball;
    }

    for(int k = 1; k <= N; k++)
        printf("%d ", basket[k]);

    return 0;
}