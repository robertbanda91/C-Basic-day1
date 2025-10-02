#include <stdio.h>

// Function declaration
int calculateSum(int a, int b);

int main() {
    int num1 = 5;
    int num2 = 10;
    int sum;

    // Function call
    sum = calculateSum(num1, num2);

    // Output
    printf("Sum = %d\n", sum);

    return 0;
}

// Function definition
int calculateSum(int a, int b) {
    return a + b;
}
