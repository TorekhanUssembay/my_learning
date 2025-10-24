#include <stdio.h>

int main(void) {

    int number = 0;
    

    printf("Please, insert a number: ");
    if (scanf("%d", &number) != 1) {
        printf("You inserted wrong value!");
        return 1;
    }

    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    if (number % 3 == 0 && number % 5 == 0) {
        printf("%d is divisible by both 3 and 5.\n", number);
    } else if (number % 3 == 0) {
        printf("%d is divisible by 3.\n", number);
    } else if (number % 5 == 0) {
        printf("%d is divisible by 5.\n", number);
    } else {
        printf("%d is not divisible by 3 or 5.\n", number);
    }
  
    return 0;

}