#include <stdio.h>

/*
Write a calculator program that calculates the sum, difference or product of two integers. The program asks for the type
of calculation first (1 = sum, 2 = difference, 3 = product). After calculation, the result is printed on the screen and
the program returns to prompt for the next calculation.

You should write a function for each calculation, prompting for the numbers, performing the desired calculation and
printing the answer on the screen. The program is terminated by entering a negative number just like in the previous
exercise.
*/

void sum(void);
void product(void);
void difference(void);

int main(void)
{
  int choice;
  do {
    printf("1: sum of two numbers\n");
    printf("2: difference of two numbers\n");
    printf("3: product of two numbers\n");
    printf("<0: terminate the program\n");
    printf("Select calculation:");
    scanf("%d", &choice);
    if(choice < 0) {
      printf("Terminating the program...\n");
    }
    else if(choice == 1) {
      sum();
    }
    else if(choice == 2) {
      difference();
    }
    else if(choice == 3) {
      product();
    }
    else {
      printf("You entered an invalid number.\n\n");
    }
  } while(choice>0);

  return 0;
}

void sum()
{
  int first, second;
  printf("Enter the first number:");
  scanf("%d",&first);
  printf("Enter the second number:");
  scanf("%d",&second);
  printf("%d + %d = %d\n\n",first,second,first+second);
}

void product()
{
  int first, second;
  printf("Enter the first number:");
  scanf("%d",&first);
  printf("Enter the second number:");
  scanf("%d",&second);
  printf("%d * %d = %d\n\n",first,second,first*second);
}

void difference()
{
  int first, second;
  printf("Enter the first number:");
  scanf("%d",&first);
  printf("Enter the second number:");
  scanf("%d",&second);
  printf("%d - %d = %d\n\n",first,second,first-second);
}
