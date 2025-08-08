#include <stdio.h>

int main() {
    int count = 1;
    int sum = 0;
    int number;

    while (count <= 10) {
        printf("%d.Enter the number: ", count);
        scanf("%d", &number);
        sum += number;
        count++;
    }

    printf("Total sum is %d\n", sum);

    return 0;
}
