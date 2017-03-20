#include <stdio.h>

/*Write a program that takes three integers as input and prints the smallest and largest of these numbers. The main
program must prompt for integers and read them. Write the functions largest() and smallest() that receive the entered
numbers as their parameters. Correspondingly, the functions shall return values corresponding to their names.
*/

int largest(int, int, int);
int smallest(int, int, int);

int main(void)
{
  int i, min, max, numbers[3];

  for(i=1;i<=3;i++){
    printf("Enter the %d. number:", i);
    scanf("%d", &numbers[i-1]); /* indexing starts at zero */
  }

  min = smallest(numbers[0],numbers[1],numbers[2]);
  max = largest(numbers[0],numbers[1],numbers[2]);

  printf("Among the numbers you entered,\nthe largest was %d and the smallest was %d.\n",max,min);

  return 0;
}

int smallest(int a, int b, int c)
{
  if(a<b && a<c) return a;
  if(b<a && b<c) return b;
  if(c<a && c<b) return c;
}

int largest(int a, int b, int c)
{
  if(a>b && a>c) return a;
  if(b>a && b>c) return b;
  if(c>a && c>b) return c;
}
