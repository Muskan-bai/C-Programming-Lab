#include<stdio.h>
int main() {
	int i,j,k=0;
	int org[3][3];
	int trsp[3][3];
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++) {
			printf("Enter element of %d row and %d column: " ,i,j);
			scanf("%d", &org[i][j]);
			
	}
    }
    
    for(i=0; i<3; i++){
		for(j=0; j<3; j++) {
		trsp[i][j]= org[j][i];	
	}
    }
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3 / 2; j++) {  
            int temp = trsp[i][j];
            trsp[i][j] = trsp[i][3 - 1 - j];
            trsp[i][3 - 1 - j] = temp;
        }
    }
    
    printf("org[3][3]= \n");
    for(i=0; i<3; i++) {
    	for(j=0; j<3; j++) {
    		printf("%d\t",org[i][j]);
		}
		printf("\n");
	}
	
	printf("rotated[3][3]= \n");
    for(i=0; i<3; i++) {
    	for(j=0; j<3; j++) {
    		printf("%d\t",trsp[i][j]);
		}
		printf("\n");
	}
    
    return 0;
}
