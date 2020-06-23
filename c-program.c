#include <stdio.h>

int main() {    
    char word[] = "hang";
    int number = 5;
    char guess;
    while(number > 0){
        printf("Enter a letter: \n");
        scanf(" %c", &guess);
        if (!strchr(word, guess)){
            printf("Your guess %c is incorrect\n", guess);
        } else {
            printf("Your guess is correct\n");
        }
        number -= 1;
        printf("<You have %d guesses remaining>\n", number);
    };
    return 0;
};

