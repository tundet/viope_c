#include <stdio.h>

/*
Write a program that prompts the user for an integer and checks whether it is even or odd.
If the number is even, print the value 0, and if it is odd, print the value 1.
*/


int main(void)
{
  int number = 0;
  printf("Enter an integer: ");
  scanf("%d",&number);
  printf("The number is %d\n",(number%2));
  return 0;
}
