#include<stdio.h>

/*
Your task is to write the subroutine "change_number" that takes the address of the variable x, increases the value of the
variable by three and prints the changed number as shown in the example printout. As you can see in the example printout,
the subroutine will permanently change the value of the variable x in the main program.
*/

void change_number(int *x);

int main()
{
  int x;
  printf("Enter the number x: ");
  scanf("%d", &x);
  printf("In the main program: x = %d\n", x);
  change_number(&x);
  printf("In the main program: x = %d\n", x);
  return 0;
}void change_number(int *x)
{
  *x = *x + 3;
  printf("In the subroutine: x = %d\n", *x);
}

