#include <stdio.h>

int main() {
    int productIDs[10];     
    int idToRemove, i, j;         
    int newSize = 10;       

    printf("Enter 10 product IDs (3 digits):\n");
    for (i = 0; i < 10; i++) {
        printf("Product %d ID: ", i + 1);
        scanf("%d", &productIDs[i]);
    }

    printf("\nEnter the product ID you want to remove: ");
    scanf("%d", &idToRemove);

    for (i = 0; i < newSize; i++) {
        if (productIDs[i] == idToRemove) {
            
            for (j = i; j < newSize - 1; j++) {
                productIDs[j] = productIDs[j + 1];
            }
            newSize--;   
            i--;         
        }
    }

    printf("\nUpdated list of product ID:\n");
    if (newSize == 0) {
        printf("All products have been removed.\n");
    } else {
        for (i = 0; i < newSize; i++) {
            printf("Product %d ID: %d\n", i + 1, productIDs[i]);
        }
    }

    return 0;
}

