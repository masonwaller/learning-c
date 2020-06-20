#include <stdio.h>

int main() {    
    char word[] = "hang";
    int number = 5;
    char guess;
    scanf(fun(itoa(number, 10), guess), &guess);

    printf("Your guess is %c\n", guess);
    return 0;
};

char fun(number, guess){
    char str;
    printf("Enter a letter: \n");
    printf("<You have %d guesses remaining>\n", number);
    scanf("%c", &str);
    return str;    
};