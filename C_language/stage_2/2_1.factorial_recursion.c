#include <stdio.h>

int factorial(int number);

int main() {
    
    int res = 0;
    int number = 0;
    printf("Please, insert the number: ");
    if (scanf("%d", &number) != 1 || number < 0) {
        printf("You inserted wrong value!");
        return 1;
    }

    res = factorial(number);

    printf("For %d factorial is %d\n", number, res);

    return 0;

}

int factorial(int number) {
    if (number < 0 || number == 1) {
        return 1;
    } else {
        return number * factorial(number - 1);
    }

}