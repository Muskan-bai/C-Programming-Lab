#include<stdio.h>
int main () {
int number ,total=0 , sum=0, total_sum;
char input;
	

	while(input != 'n') {
		
		printf("\nEnter a number: ");
		scanf("%d", &number);
		total++;
		
		sum =sum + number;
		
		printf("The running total =%d\n", total);
		
  		printf("\n\nDo you want to enter another number(y/n): ");
  		scanf(" %c", &input);
		
		
	if(input == 'n' || input =='N') {
		break;
		return 0;
		}
	
	else if(input == 'y' || input == 'Y' ) {
		continue;
		}
			
		}
		printf("\n\nTotal sum of all entered numbers= %d", sum);
		
		
	return 0;
}
