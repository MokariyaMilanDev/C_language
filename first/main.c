#include <stdio.h>

int main() {
    int number = 20;

    // Ask the user for input
    printf("Enter a non-negative integer : %d\n", number);
    scanf("Enter your age : %d", &number);
    printf("You entered : %d", number);

    return 0;
}
