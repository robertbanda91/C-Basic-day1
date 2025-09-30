#include <stdio.h>

int main() {
    char name[100];
    int age;
    char hobby[] = "reading"; // My favorite hobby

    // Ask user for their name
    printf("Enter your name: ");
    scanf("%99s", name);

    // Ask user for their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Print user details
    printf("Hello, my name is %s and I am %d years old.\n", name, age);
    printf("My favorite hobby is %s.\n", prayer);

    // Print greeting message
    printf("Hello %s! You are %d years old.\n", name, age);

    return 0;
}
