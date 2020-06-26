#include <stdio.h>

int main() {    
    char word[] = "hang";
    int number = 5;
    char guess;
    printf("Have someone else type in a word for you. 4 letters! \n");
    scanf("%s", &word);
    char arr[] = "----";
    printf("\n\n\n\n\n\n\n");
    while(number > 0){
        printf("Enter a letter: \n");
        scanf(" %c", &guess);
        char *p = strchr(word, guess);
        if (!p){
            printf("Your guess %c is incorrect\n", guess);
            number -= 1;
        } else {
            int q = p - word;
            arr[q] = word[q];
            printf("Your guess is correct\n");
            // printf("%c\n", word[q]);
        };
        printf("%s", arr);
        printf("\n<You have %d strikes remaining>\n", number);
        if (!strchr(arr, '-')){
            printf("YOU WIN!!!!!!");
            break;
        };
    };
    if (number == 0){
        printf("YOU LOSE!!!!");
    };
    return 0;
};

