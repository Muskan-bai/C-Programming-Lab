#include <stdio.h>

int main() {
    float nums[5];         
    float results[5][3];       
    int i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &nums[i]);
    }

    for (i = 0; i < 5; i++) {
        results[i][0] = nums[i] + 10;   
        results[i][1] = nums[i] - 5;    
        results[i][2] = nums[i] * 2;    
    }

    
    printf("\nOriginal\t+10\t\t-5\t\t*2\n");
    
    for (i = 0; i < 5; i++) {
        printf("%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", 
               nums[i], results[i][0], results[i][1], results[i][2]);
    }
    

    return 0;
}

