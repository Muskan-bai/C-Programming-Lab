#include<stdio.h>
int main() {
	char input, secondInput;
	int totalVowels, totalConsonants;
	
	
	while(secondInput != 'n'){
		
		printf("Enter the character to find whether it is Vowel or Consonant: ");
		scanf(" %c", &input);
		if(input == 'a' || input == 'A' ||
	   		input == 'e'  || input == 'E' ||
	   		input == 'i' || input == 'I' ||
	   		input == 'o' || input == 'O' ||
	   		input == 'u' || input == 'U' ){
	    	printf("%c is a Vowel\n", input);
				totalVowels++;
	    }else{
	    	printf("%c is a Consonant\n", input);
	    	totalConsonants++;
		}	
	   
	   printf("\nDo you want to continue? (y for yes / n for no): ");
	   scanf(" %c", &secondInput);
	   
	   printf("\n\n");
   } 
	
	printf("Total numbers of vowels are %d", totalVowels);
	printf("\nTotal numbers of Consonants are %d", totalConsonants);
	return 0;
}
