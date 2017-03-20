#include <stdio.h>

/*
The file "numbers.s" contains 4 integers. The numbers are on the first line of the file, separated by spaces. Write a
program that reads the integers from the file and calculates their sum. Finally, the program prints the numbers and the
sum on the screen.
*/

int main(void)
{
  char *fileName = "numbers.s";
  int i, numbers[4], sum=0;
  FILE *reading;

  if((reading = fopen(fileName,"r")) == NULL)
  {
    printf("Failed to open the file %s\n", fileName);
    exit(1);
  }

  /* read the numbers from the file */
  for(i=0;i<4;i++)
  {
    fscanf(reading,"%d", &numbers[i]);
    sum += numbers[i];
  }

  /* close the file */
  fclose(reading);

  printf("Numbers found in the file %s:\n",fileName);
  for(i=0;i<4;i++)
  {
    if(i==0)
    {
      printf("%d", numbers[i]);
    }
    else if(i<3)
    {
      printf(", %d", numbers[i]);
    }
    else
    {
      printf(" and %d\n", numbers[i]);
    }
  }
  printf("\nSum of the numbers: %d\n", sum);

  return 0;
}
