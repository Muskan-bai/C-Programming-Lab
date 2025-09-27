#include<stdio.h>
int main() {
int x,y,z;
	printf("enter x: ");
	scanf("%d", &x);
	
	printf("enter y: ");
	scanf("%d", &y);
	
	printf("enter z: ");
	scanf("%d", &z);
	
	if(x>y && x>z) {
		printf("\nx is the largest number");
	}
	else if(y>x && y>z) {
		printf("\ny is the largest");
	}
	else if(z>x && z>y) {
		printf("\nz is the largest");
	}
	else {
		printf("\ntwo numbers are equal");
	}
	return 0;
}

