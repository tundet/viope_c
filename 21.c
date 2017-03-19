#include <stdio.h>

/*The files "mata.txt" and "matb.txt" contain integer matrices of size 10 x 10. Write a program that calculates the sum
of the matrices in a new matrix. The resulting sum matrix shall be saved to the file "sum.usr".
The matrix elements are separated by spaces and newlines. For example:
1 2 3 4 5 6 7 8 9 10
11 12 13 14 15 16 17 18 19 20
... ... ...
... ... ...
91 92 93 94 95 96 97 98 99 100
The sum matrix must be saved in the same format. At the end, the program prints a message indicating successful completion.
*/

int main(void)
{
  char *mata_txt = "mata.txt", *matb_txt = "matb.txt", *sum = "sum.usr";
  int i, j, mata[10][10], matb[10][10];
  FILE *read, *write;

  /* matrix a */
  if((read = fopen(mata_txt,"r")) == NULL)
  {
    printf("Failed to open the file %s\n", mata_txt);
    exit(1);
  }
  for(i=0;i<10;i++)
  {
    for(j=0;j<10;j++)
    {
      fscanf(read,"%d", &mata[i][j]);
    }
  }
  fclose(read);

  /* matrix b */
  if((read = fopen(matb_txt,"r")) == NULL)
  {
    printf("Failed to open the file %s\n", matb_txt);
    exit(1);
  }
  for(i=0;i<10;i++)
  {
    for(j=0;j<10;j++)
    {
      fscanf(read,"%d", &matb[i][j]);
    }
  }
  fclose(read);

  /* create sum matrix */
  if((write = fopen(sum,"w")) == NULL)
  {
    printf("Failed to open the file %s\n", sum);
    exit(1);
  }
  for(i=0;i<10;i++)
  {
    for(j=0;j<10;j++)
    {
      if(j == 9)
      {
        fprintf(write,"%d\n",mata[i][j]+matb[i][j]);
      }
      else
      {
        fprintf(write,"%d ",mata[i][j]+matb[i][j]);
      }
    }
  }
  fclose(write);

  printf("The sum of the matrices has been calculated into the file %s.\n",sum);

  return 0;

}
