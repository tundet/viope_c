#include <stdio.h>

/*
Write a program that prompts the user for two integers and prints the sum, difference and product of the numbers on the screen.
*/

int main(void)
{
  int first = 0, second = 0;
  printf("Enter the first number:");
  scanf("%d",&first);
  printf("Enter the second number:");
  scanf("%d",&second);

  printf("\n"); /* print an empty line */

  printf("%d+%d=%d\n",first,second,first+second);
  printf("%d-%d=%d\n",first,second,first-second);
  printf("%d*%d=%d\n",first,second,first*second);

  return 0;
}
