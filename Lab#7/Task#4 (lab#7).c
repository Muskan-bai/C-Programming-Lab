#include <stdio.h>

int main() {
    int scores[10] = {98, 67, 77, 92, 85, 62, 79, 95, 83, 78};
    int i, j, temp;
    float median;

   
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (scores[j] > scores[j + 1]) {
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }

    
    printf("Sorting Scores in Ascending Order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", scores[i]);
    }

    
    median = (scores[4] + scores[5]) / 2.0;

    printf("\nMedian Score = %f\n", median);

    return 0;
}

