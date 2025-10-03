#include<stdio.h>
int main() {
	int num, i=1 ,j, countprime=0, sum_of_primes=0;
	
	printf("Enter Three digit number: ");
	scanf("%d", &num);
	
	if(num < 100 || num > 999){
		printf("Invalid input");
		return 0;
	}
	
	printf("\n");
	for(i=2; i<=num; i++) {
		bool isPrime = true;
		for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
				isPrime = false;
                break;
            }
        }
		
		if(isPrime) {
			printf("%d is a prime number\n", i);
			countprime++;
			sum_of_primes += i;
		}	
	}
	printf("\n\nTotal prime numbers are %d\n",countprime);
	printf("Sum of all primes number is %d",sum_of_primes);
		
	return 0;
}
