#include <stdio.h>

int main() {    
    char word[] = "hang";
    int number = 5;
    char guess;
    char arr[] = "----";
    int len = 1;
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
            len += 1;
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

