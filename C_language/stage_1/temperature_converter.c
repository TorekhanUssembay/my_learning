#include <stdio.h>

int main() {


    double degree = 0;
    char c_or_f = '\0';
    double res = 0;

    printf("Please, insert temperature in Firenheits: ");
    if (scanf("%lf", &degree) != 1) {
        printf("You entered invalid value!");
        return 1;
    }

    printf("Please, insert Celsius(c) or Fahrenheit(f): ");
    scanf(" %c", &c_or_f);

    switch (c_or_f) {
        case 'c':
            res = ((degree - 32.0) * (5.0 / 9.0));
            break;

        case 'f':
            res = ((degree * (9.0 / 5.0)) + 32.0);
            break;
        default:
            printf("Invalid scale inserted. Use c or f!");
    }

    printf("%.2lf\n", res);

    return 0;

}