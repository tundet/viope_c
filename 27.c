#include<stdio.h>

/*
Your task is to write the subroutine "change_number" that takes an integer, increases it by three and prints the changed
number as shown in the example printout. Pay attention to the value of the variable "x" in different parts of the program.
In the following exercise, your subroutine will be supplemented with pointers.
*/

void change_number(int x);

int main()
{
  int x;
  printf("Enter the number x: ");
  scanf("%d", &x);
  printf("In the main program: x = %d\n", x);
  change_number(x);
  printf("In the main program: x = %d\n", x);
  return 0;
}void change_number(int x)
{
  x = x + 3;
  printf("In the subroutine: x = %d\n", x);
}

