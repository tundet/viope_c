#include <stdio.h>
/*
Write a program that prompts the user for an integer n (n>0) and prints the factorial of the number on the screen.
For example, the factorial of n is designated n!, which means the number calculated as follows: 1*2*3...*n
*/

int main(void)
{
  int number, i, factorial = 1;

  printf("Enter an integer: ");
  scanf("%d", &number);

  for(i=2;i<=number;i++){
     factorial = factorial * i;
  }

  printf("The factorial of %d is %d\n", number, factorial);

  return 0;
}
