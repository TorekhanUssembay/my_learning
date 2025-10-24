#include <stdio.h>

int main() {

    double number;

    printf("Please, insert number: ");
    if (scanf("%lf", &number) != 1) {
        printf("You did not insert number!");
        return 1;
    } 

    for (int i=1; i<=10; i++) {
        printf("%.2lf x %d = %.2lf\n", number, i, number * i);
    }


}