#include <stdio.h>

/*
Write a program that prompts the user for an integer and checks whether it is even or odd.
If the number is even, print "Number 2 is even.", if it is odd, print "Number 1 is odd.".
*/

int main(void)
{
  int num;

  printf("Enter an integer: ");

  scanf("%d", &num);
  if (num % 2 == 0) {
		printf("Number %d is even.\n", num);
  }else{
		printf("Number %d is odd.\n", num);
  }
  return 0;
}