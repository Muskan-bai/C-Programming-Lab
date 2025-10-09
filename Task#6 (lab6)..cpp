#include <stdio.h>
int main() 
{
int grade=0, Above_70=0, Between_50_And_70=0, Below_50=0, sum=0, total_grades; 
 float average;
    
    while(grade != -1) {
    	printf("Enter your grade (between 0 and 100) and (-1 to stop); ");
    	scanf("%d", &grade);
    	
    if (grade == -1) {
            break;  
        }
        
    if (grade < 0 || grade > 100) {
            printf("Invalid grade! Please enter a value between 0 and 100.\n");
            continue;
    }
    	printf("You entered: %d\n", grade);
		
    if(grade>70) {
    	Above_70++;
	}
	
	else if(grade<=70 && grade>=50) {
		Between_50_And_70++;
	}
	
	else {
		Below_50++;
	}
	
	sum=sum+grade;
}
		
   		printf("\n\nGrades that are above 70 = %d\n\n", Above_70);
   		printf("Grades that are between 50 and 70 = %d\n\n", Between_50_And_70);	
   		printf("Grades that are below 50 = %d\n\n", Below_50 ); 
   		
   		total_grades =Above_70 +Between_50_And_70 +Below_50;
   		if(total_grades !=0) {
   		average=(float)sum/total_grades;
   		printf("Average grades are= %f\n", average);
   	    }
   	    
   	    else {
   	    	printf("Average is not defined");
		   }

    return 0;
}

