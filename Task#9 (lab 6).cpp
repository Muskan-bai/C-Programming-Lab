#include <stdio.h>

int main() {
    int num=0, largest=0, smallest=0,firstInput = 1;
    char input ='y';
    

    while (input != 'n' || input != 'N') {
        printf("Enter a number: ");
        scanf("%d", &num);

      
        if (firstInput) {
        	
        largest = num;
        smallest = num;
        firstInput = 0;
            
        } 
		else {
			
            if (num > largest)
                largest = num;
                
            if (num < smallest)
                smallest = num;
        }

         
        printf("Do you want to continue? (y/no): ");
        scanf(" %c", &input);
        
        if (input =='n' || input == 'N') {
        	break;
		}
		
		if (input =='y' || input == 'Y') {
        	continue;
		}
        
       
    }
      
    printf("Largest number entered: %d\n", largest);
    printf("Smallest number entered: %d\n", smallest);

    return 0;
}

