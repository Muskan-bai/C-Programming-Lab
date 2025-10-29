#include <stdio.h>
 int main() {
 int i,j,n,k=0,space;
 	printf("Enter the number of rows: ");
 	scanf("%d",&n);
 	
 	for(i=1; i<=n; i++,k=0) {
 		
 	  for(space=1; space<=(n-i); space++) {
	 		printf("  ");
		 }
		 
		while (k != 2 * i - 1) {
        	printf("* ");
         	++k;
      }
		printf("\n"); 	
	 }
	 
	 for(i=n-1; i>=1; i--,k=0) {
 		
 	  for(space=1; space<=(n-i); space++) {
	 		printf("  ");
		 }
		 
		while (k != 2 * i - 1) {
        	printf("* ");
         	++k;
      }
		printf("\n"); 	
	 }
	 
	 
	 
	 return 0;
}
