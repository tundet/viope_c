#include<stdio.h>

/*
Write a program that first asks the user for an integer and after that, a floating-point number.
Finally, the program prints both numbers on the screen.
The floating-point number shall be printed with two decimal places of precision.
*/

int main(void)
{
  int integer = 0;
  float floating_point = 0;
  printf("Enter an integer: ");
  scanf("%d", &integer);
  printf("Enter a decimal number:");
  scanf("%f", &floating_point);

  printf("\nYou entered the integer: %d\n", integer);
  printf("You entered the decimal number, rounded to two decimal places: %.2f\n", floating_point);

  return 0;
}