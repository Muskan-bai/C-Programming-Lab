#include<stdio.h> 
int main() {
	int i,j;
	int original[3][3]={{1, 2, 3}, {3, 4, 5}, {5, 6, 7}};
	int transpose[3][3];
	
	printf("original[3][3]= \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%d\t", original[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++) {
		transpose[i][j]= original[j][i];
		}
	}
	printf("\nTranspose[3][3]= \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%d\t", transpose[i][j]);
		}
		printf("\n");
	}

	return 0;
}
