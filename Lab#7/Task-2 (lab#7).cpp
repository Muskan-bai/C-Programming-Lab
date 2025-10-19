#include <stdio.h>

int main() {
    int nums[10] = {12, 7, 9, 18, 22, 5, 3, 8, 10, 15};
    int i;
    int sumEven = 0, sumOdd = 0;
    int evenFound = 0, oddFound = 0;

    
    for (i = 0; i < 10; i++) {
        if (nums[i] % 2 == 0) {       
            sumEven += nums[i];
            evenFound = 1;
        } else {                      
            sumOdd += nums[i];
            oddFound = 1;
        }
    }

    
    if (evenFound)
        printf("Sum of even numbers = %d\n", sumEven);
    else
        printf("No even numbers found.\n");

    if (oddFound)
        printf("Sum of odd numbers = %d\n", sumOdd);
    else
        printf("No odd numbers found.\n");

    return 0;
}

