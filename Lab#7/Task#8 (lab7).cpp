#include <stdio.h>
#include <ctype.h>   

int main() {
    char text[100];    
    int i;

    
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);  

    for (i = 0; text[i] != '\0'; i++) {
        char ch = tolower(text[i]);  

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            text[i] = toupper(text[i]);  
        }
    }

    printf("\nModified string with uppercase vowels:\n%s", text);

    return 0;
}

