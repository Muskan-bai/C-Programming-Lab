#include <stdio.h>

int main() {
    int groupA[5], groupB[5], merged[10];
    int i, j, index = 0;

    printf("=== Survey Data Merger ===\n");

    printf("\nEnter responses for Group A (5 integers):\n");
    for (i = 0; i < 5; i++) {
        printf("Group A - Response %d: ", i + 1);
        scanf("%d", &groupA[i]);
    }

    printf("\nEnter responses for Group B (5 integers):\n");
    for (i = 0; i < 5; i++) {
        printf("Group B - Response %d: ", i + 1);
        scanf("%d", &groupB[i]);
    }

    for (i = 0; i < 5; i++) {
        merged[index++] = groupA[i];  
}
    for (j = 0; j < 5; j++) {
        merged[index++] = groupB[j];  
    }

    printf("\nFinal Merged Survey Responses:\n");
    for (i = 0; i < 10; i++) {
        printf("Response %2d: %d\n", i + 1, merged[i]);
    }

    return 0;
}
