#include <stdio.h>

// int main(){
//     int testInteger = 5;
//     printf("Number = %s", "hello");
//     return 0;
// }

// int main(){
//     int number;
//     printf("Enter number: ");
//     scanf("%d", &number);
//     printf("You entered number %d", number);
//     return 0;
// }

int main() {    
    int number1, number2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}