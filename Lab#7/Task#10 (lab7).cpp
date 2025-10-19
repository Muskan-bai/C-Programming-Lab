#include <stdio.h>

int main() {
    int n;

    printf("How many elements do you want to enter? ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Value for position [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    int x, newValue;
    printf("\nEnter the index number to modify (0 to %d): ", n - 1);
    scanf("%d", &x);

    if (x >= 0 && x < n) {
        printf("Enter the new value for arr[%d]: ", x);
        scanf("%d", &newValue);
        arr[x] = newValue;
    } else {
        printf("? Invalid index! No changes made.\n");
        return 0;
    }

    printf("\n--- Updated Array ---\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

