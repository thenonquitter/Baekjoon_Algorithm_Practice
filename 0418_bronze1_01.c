#include <stdio.h>
#define MAX_SUBJECT 1000

int main(void){
    int subjects;
    float MAX = 0;
    
    scanf("%d", &subjects);
    int scores[subjects];
    float after_scores[subjects];

    for(int i = 0; i < subjects; i++){
        scanf("%d", &scores[i]);
        if(MAX < scores[i])
            MAX = scores[i];
    }

    float sum = 0;
    float mean;

    for(int i = 0; i < subjects; i++){
        after_scores[i] = scores[i]/MAX*100;
    }
    for(int i = 0; i < subjects; i++){
        sum += after_scores[i];
    }
    mean = sum / subjects;

    printf("%f", mean);
    return 0;
}