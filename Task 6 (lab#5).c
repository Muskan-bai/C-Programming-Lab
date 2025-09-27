#include<stdio.h>
int main() {
int x,y,z;
	printf("Enter x: ");
	scanf("%d", &x);
	
	printf("Enter y: ");
	scanf("%d", &y);
	
	printf("Enter z: ");
	scanf("%d", &z);
	
	(x>y && x>z)? printf("x is the largest number"):((y>x && y>z)? printf("y is the largest number"):printf("z is the largest number"));
	return 0;
}

