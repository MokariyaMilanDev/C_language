//? In C programming, printf() is one of the main output function. The function sends formatted output to the screen
//? In C programming, scanf() is one of the commonly used function to take input from the user. The scanf() function reads formatted input from the standard input such as keyboards.

#include <stdio.h>

int main() {
  int number = 20;
  printf("Enter a non-negative integer : %d\n", number);
  //! &number is the address of number
  scanf("Enter your age : %d", &number);
  printf("You entered : %d", number);
  return 0;
}
