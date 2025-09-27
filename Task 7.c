#include<stdio.h>
int main() {
	int x,y;
		printf("Enter x: ");
		scanf("%d", &x);
	
		printf("Enter y: ");
		scanf("%d", &y);
	
	int sum=x+y;
		printf("sum= %d\n", sum);
	
	int difference=x-y;
		printf("difference= %d\n", difference);
		
	int product=x*y;
		printf("product= %d\n", product);
		
	float quotient=x/y;
		printf("quotient= %f\n", quotient);
	
	int remainder=x%y;
		printf("remainder %d\n", remainder);
	return 0;
   }

