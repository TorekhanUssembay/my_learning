#include <stdio.h>

int main() {

    double a = 0;
    double b = 0;
    char operator = '\0';
    double res = 0;
    
    printf("Please, insert number: ");
    if (scanf("%lf", &a) != 1) {
        printf("You entered invalid value!");
        return 1;
    }
    
    printf("Please, insert number: ");
    if (scanf("%lf", &b) != 1) {
        printf("You entered invalid value!");
        return 1;
    }
    
    printf("Please, insert operator(+, -, /, *): ");
    scanf(" %c", &operator);
    
    switch(operator) {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '/':
            if (b == 0) {
                printf("Devision by 0 is forbidden!");
                return 1;
            } else {
            res = a / b;
            break;
            }
        case '*':
            res = a * b;
            break;
        default: 
            printf("Invalid value!");
    }


    printf("%.2lf\n", res);

    return 0;

}