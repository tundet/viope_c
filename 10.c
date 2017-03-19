#include <stdio.h>

/*
Write a simple calculator program that calculates the difference, sum or product of two numbers.
First, the program asks which calculation to perform.
After this, the program prompts for the numbers, performs the calculation and prints the result.
The selection within the program has to be done using a switch() statement.
*/

int main(void)
{
  int choice, first, second, result = 0;
  char character;

  /* print the choices */
  printf("1: subtraction\n2: addition\n3: multiplication\n");
  printf("Select function:");
  scanf("%d", &choice);

  /* prompt for the numbers */
  printf("Enter the first number:");
  scanf("%d", &first);
  printf("Enter the second number:");
  scanf("%d", &second);

  /* perform the desired calculation */
  switch(choice){
    case 1:
    {
      result = first - second; character = '-';
      break;
    }
    case 2:
    {
      result = first + second; character = '+';
      break;
    }
    case 3:
    {
      result = first * second; character = '*';
      break;
    }
    default:
      printf("You chose an incorrect number!");
      break;
  }

  /* printing the result */
  printf("%d%c%d=%d\n",first,character,second,result);

  return 0;
}
