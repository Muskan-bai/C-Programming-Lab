#include<stdio.h>
int main() {
	int input, i, feb_num1 = 0, feb_num2 = 1, next, total_sum;
	
	printf("Enter a number: ");
	scanf("%d", &input);	

	for(i = 0; i < input; i++){
		printf("%d ", feb_num1);
		
		total_sum += feb_num1;
        next = feb_num1 + feb_num2;
		feb_num1 = feb_num2;
        feb_num2 = next;
	}
	
	printf("\n\nTotal sum of Fibonacci sequence is %d", total_sum);
		
	return 0;
}
