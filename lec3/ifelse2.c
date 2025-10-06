#include <stdio.h>
#include <ctype.h>
int main() {
    char c;

    printf("Enter an alphabet: ");
    scanf(" %c", &c); 

    
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        printf("%c is a vowel.\n", c);
    }
   
    else if (isalpha(c)) {
        printf("%c is a consonant.\n", c);
    }
    
    else {
        printf("%c is not an alphabet.\n", c);
    }

 return 0;
}