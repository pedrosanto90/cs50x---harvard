#include <stdio.h>

int main(void){
    int n;
    printf("Number of scores: ");
    scanf("%i", &n);
    
    int scores[n];

    float total = 0;
    for (int i = 0; i < n; i++){
        printf("Score %i: ", i + 1);
        scanf("%i", &scores[i]);
        for (int j = 0; j < n; j++){
            total = total + scores[i]; 
        }  
    }    
    for (int k = 0; k <= n - 1; k++){
        printf("%i ", scores[k]);
    }
    printf("\n");
    float avarage = total / n;
    printf("Avarage: %f\n", total);
    
}
