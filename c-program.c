#include <stdio.h>

int main() {    
    char word[] = "hang";
    int number = 5;
    char guess;
    char arr[] = "h";
    int len = 0;
    while(number > 0){
        printf("Enter a letter: \n");
        scanf(" %c", &guess);
        char *p = strchr(word, guess);
        if (!p){
            printf("Your guess %c is incorrect\n", guess);
            number -= 1;
        } else {
            int q = p - word;
            arr[len] = q;
            len += 1;
            printf("Your guess is correct\n");
            // printf("%c\n", word[q]);
        };
        for (int i=0; word[i] != '\0'; i++){
            printf("%s", arr);
        };
        printf("\n<You have %d strikes remaining>\n", number);
    };
    return 0;
};

