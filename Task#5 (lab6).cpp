#include <stdio.h>
int main() 
	{
    int num, factorial = 1;

    	printf("Enter a positive integer: ");
    	scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        
     return 0;   
    }

	else {
        printf("%d! = ", num);
	}
    
    for (int i = num; i >=1; i--) {
        printf("%d", i);
        factorial *= i;
        
        if (i != 1)
            printf(" X ");  
        }

        printf(" = %d\n", num , factorial);
   
    return 0;
}

