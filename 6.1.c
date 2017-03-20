#include <stdio.h>

/*
Write a program that prompts the user for an integer n (n>0) and prints the numbers 1,2,3...n on the screen one below the other.
Write the program using the FOR statement.
*/

int main(void)
{
  int number, i;

  printf("Enter an integer: ");
  scanf("%d", &number);

  for(i=1;i<=number;i++){
    printf("%d\n", i);
  }

  return 0;
}
