#include <stdio.h>
int factorial(int n) {
	int i,j,r;
    int fact = 1;
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int nCr(n,  r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n;
    int i,j,r;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
       
        for( j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        for( j = 0; j <= i; j++) {
            printf("%d ", nCr(i, j));
        }

        printf("\n");
    }

    return 0;
}

