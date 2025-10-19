#include <stdio.h>

int main() {
    float grades[10];           
    float sum = 0, average;
    float highest, lowest;
    int highIndex = 0, lowIndex = 0;

    printf("Enter grades of 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%f", &grades[i]);
    }

    printf("\nGrades of all students are:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: %.2f\n", i + 1, grades[i]);
        sum += grades[i];
    }

    average = sum / 10;

    highest = lowest = grades[0];
    for (int i = 1; i < 10; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
            highIndex = i;
        }
        if (grades[i] < lowest) {
            lowest = grades[i];
            lowIndex = i;
        }
    }

    printf("\nAverage grade: %.2f\n", average);
    printf("Highest grade: %.2f (Index %d)\n", highest, highIndex);
    printf("Lowest grade: %.2f (Index %d)\n", lowest, lowIndex);

    printf("\nModified grades...\n");
    grades[lowIndex] += 5;

    printf("\nUpdated grades:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: %.2f\n", i + 1, grades[i]);
    }

    return 0;
}

