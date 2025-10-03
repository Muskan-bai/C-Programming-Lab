#include <stdio.h>

int main() {
  	int x=0,counteven=0,countodd=0;
  	char input,continuety;
  	
  	printf("Enter the numbers to find the event and odd \nTo stop enter 'S'\n\n");
  	
   	while(continuety !='n') {
 
  	printf("Enter the number: ");
             scanf(" %c", &input);
  	
  	if(input == 'S' || input == 's')
	  {
  		break;
	  }
  	
  	x = input - '0';
  
  	if(x%2==0) {
  		counteven= counteven+1;
  		printf("%d is an even number\n\n",x);
  	    continue;
	  }
	  
	else {
		countodd= countodd+1;
		printf("%d is a odd number\n\n",x);
		continue;
	}
  
	 printf("\nDo you want to continue? (y for yes / n for no): ");
   scanf(" %c", &continuety);   
 } 
    
	
  printf("\n\nNo of evennumbers are=%d",counteven);
  printf("\n\nNo of oddnumbers are=%d",countodd);
    return 0;
 }



