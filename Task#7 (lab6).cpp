#include<stdio.h>
int main() {
	int amount=1, balance=5000, withdrawals=0, deposits=0;
		
		printf("Enter amount of transaction(positive for deposits, negative for withdrawals and 0 to stop).: ");
		
	while(amount !=0 ) {
		printf("\nEnter amount of transaction: ");
		scanf("%d", &amount);
		
		
	if(amount>0) {
		printf("%d amount deposits\n",amount);
		balance +=amount; 
		deposits++;
	}
	
	else if(amount<0) {
		printf("%d amount Withdrawals\n", -amount);
		balance +=amount;
		withdrawals++;
	}
	
	if(amount==0) {
		break;
	return 0;
	}
	
	}
	
		
		printf("\nNumber of deposits =%d\n",deposits);
		printf("\nNumber of withdrawals =%d\n",withdrawals);
		printf("\nFinal balance= %d\n\n" ,balance);

	return 0;
	}
