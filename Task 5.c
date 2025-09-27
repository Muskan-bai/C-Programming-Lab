#include<stdio.h>
int main() {
int Course_number;
char grade;
     printf("Enter Course_number(1,2,or3): ");
     scanf("%d", &Course_number);
	
 switch(Course_number) {
     case 1:
     case 2:
     case 3:
	printf("Enter your grade(A, B, C, D, E or F): ");
	scanf(" %c", &grade);
			
             switch(grade) {
	      case 'A':
	      case 'a':
		printf("Excellent performance in course %d", Course_number);
	     break;
				
	     case 'B':
	     case 'b':
		printf("Very good performance in course %d", Course_number);
	    break;
					
	    case 'C':
	    case 'c':
		printf("Good performance in course %d", Course_number);
	    break;
					
	   case 'D':
	   case 'd':
		printf("Need Improvement in course %d", Course_number);
	    break;
					
	   case 'F':
	   case 'f':
		printf("Failed in course %d", Course_number);
	   break;
				
          default:
            printf("Invalid grade.\n");
    }
         break;
		
       default:
          printf("Invalid course number");	
	}
   return 0;	
   }
								

