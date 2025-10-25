#include <stdio.h>

int main() {

    int number =0;
    int res = 1;

    printf("Please insert a number: ");

    if (scanf("%d", &number) != 1) {
        printf("You inserted wrong value!");
        return 1;
    }

    for (int i = 1; i <= number; i++) {
        res = i * res;
    }

    printf("%d\n", res);

    return 0;
}