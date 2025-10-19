#include <stdio.h>

int main() {
    int a[10] = {12, 45, 67, 23, 89, 34, 90, 11, 56, 78};
    int i, temp;
    int sum = 0;

    
    printf("Original Array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

  
    for (i = 0; i < 10 / 2; i++) {
        temp = a[i];
        a[i] = a[9 - i];
        a[9 - i] = temp;
    }

   
    printf("\n\nReversed Array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
        sum += a[i];   
    }

    
    printf("\n\nSum of elements in reversed array = %d\n", sum);

    return 0;
}
