#include <stdio.h>

int main() {    
    char word[] = "hang";
    int number = 5;
    char guess;
    while(number > 0){
        printf("Enter a letter: \n");
        scanf("%c", &guess);
        number -= 1;
        if (!strchr(word, guess)){
            printf("Your guess %c is incorrect", guess);
        } else {
            printf("Your guess is correct");
        }
        printf("<You have %d guesses remaining>\n", number);
    };
    return 0;
};

