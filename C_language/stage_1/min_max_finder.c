#include <stdio.h>

int main(void) {

    int number1 = 0;
    int number2 = 0;
    int number3 = 0;    
    int max = 0;
    int min = 0;

    printf("Please, insert your number: ");
    if (scanf("%d", &number1) != 1) {
        printf("You didn't insert a number!");
        return 1;
    }

    printf("Please, insert your number: ");
    if (scanf("%d", &number2) != 1) {
        printf("You didn't insert a number!");
        return 1;
    }

    printf("Please, insert your number: ");
    if (scanf("%d", &number3) != 1) {
        printf("You didn't insert a number!");
        return 1;
    }

    min = max = number1; 

    if (max < number2) {
        max = number2;
    }
    if (min > number2) {
        min = number2;
    }

    if (max < number3) {
        max = number3;
    }
    if (min > number3) {
        min = number3;
    }
    
    printf("Max number is %d and min number is %d\n", max, min);

}