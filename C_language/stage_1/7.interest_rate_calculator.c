#include <stdio.h>

int main() {

    double principal, time, rate = 0;
    double result =0;

    printf("Please, insert Principal: ");
    if (scanf("%lf", &principal) != 1) {
        printf("You inserted wrong value!");
        return 1;
    }
    
    printf("Please, insert Time: ");
    if (scanf("%lf", &time) != 1) {
        printf("You inserted wrong value!");
        return 1;
    }

    printf("Please, insert Rate: ");
    if (scanf("%lf", &rate) != 1) {
        printf("You inserted wrong value!");
        return 1;
    }

    result = (principal * time * rate) / 100;
    printf("%lf", result);

}