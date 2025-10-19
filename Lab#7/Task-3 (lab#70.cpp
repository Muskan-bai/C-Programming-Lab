#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    char ch;
    int i, count = 0;

    
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);  

    
    text[strcspn(text, "\n")] = '\0';

    
    printf("Enter the character to search for: ");
    scanf("%c", &ch);

    
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == ch) {
            count++;
        }
    }

    
    if (count > 0)
        printf("The character '%c' appears %d times in the string.\n", ch, count);
    else
        printf("The character '%c' was not found in the string.\n", ch);

    return 0;
}

