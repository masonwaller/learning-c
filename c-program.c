#include <stdio.h>

int main() {    
    char word[] = "hang";
    int number = 5;
    char guess;
    printf("Enter a letter: \n");
    printf("<You have %d guesses remaining>\n", number);
    scanf("%c", &guess); 
    number -= 1;     
    
    printf("Your guess is %c\n", guess);
    return 0;
}