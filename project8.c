#include <stdio.h>

// Function declaration
int calculateSum(int a, int b);

int main() {
    int num1 = 5;
    int num2 = 10;
    int sum;
    sum = calculateSum(num1, num2);
    printf("Sum = %d\n", sum);
    return 0;
}
int calculateSum(int a, int b) 
{
    return a + b;
}
