#include <stdio.h>

int main() {
    int num, i;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer\n");
        return 1;  
    }

    for (i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d is %d\n", num, factorial);

    return 0;
}


