#include <stdio.h>

int main() {

    int number = 0;
    int sum =0;

    printf("Please, a number: ");
    if(scanf("%d", &number) != 1) {
        printf("You insert wrong data!");
        return 1;
    }

    for (int i = 1; i <= number; i++) {
        sum += i;   
    }

    printf("The sum for %d is %d\n", number, sum);

    return 0;

}