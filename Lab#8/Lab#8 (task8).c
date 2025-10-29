#include<stdio.h> 
int main() {
int i=0,j=0,even=0,odd=0,negative=0,positive=0,zero=0;
int arr[3][3];

	for(i=0; i<3; i++){
		for(j=0; j<3; j++) {
			printf("Enter element of %d row and %d column: " ,i,j);
			scanf("%d", &arr[i][j]);
			
	}
    }

	printf("\n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%d\t",arr[i][j]);
		
		if(arr[i][j] > 0) {
		positive++;
		}
		
		else if(arr[i][j]<0) {
			negative++;
		}
		
		else if(arr[i][j]==0) {
			zero++;
		}
		
		if(arr[i][j] % 2 ==0) {
			even++;
		}
		
		else {
			odd++;
		}
	}
	printf("\n");	
    }
	
	printf("\nThe number of Positive numbers= %d\n",positive);
	printf("The number of Negative numbers= %d\n",negative);
	printf("The number of zero= %d\n",zero);
	printf("The number of even numbers= %d\n",even);
	printf("The number of odd numbers= %d\n",odd);	
	
	
return 0;
}
