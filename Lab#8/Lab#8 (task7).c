#include<stdio.h> 
int main() {
	int i,j,n;
	int mat1[2][2] = {{1, 4}, {3, 2}};
	int mat2[2][2] = {{7, 6}, {5, 8}};
	int product[2][2];
	
	for(i=0; i<2; i++) {
		for(j=0; j<2; j++) {
			product[i][j]= mat1[i][j]*mat2[i][j];
		}
	}
	
	for(i=0; i<2; i++) {
		for(j=0; j<2; j++) {
			printf("%d\t", product[i][j]);
		}
		printf("\n");
	}
	return 0;
}
