#include <stdio.h>

/*
Write a program that prints the text "Hello world!" into the file "hello.usr". The file does not exist, so it must be
created. Finally, the program must print a message on the screen indicating that writing to the file was successful.
The text printed to the file must exactly match the assignment.
*/

int main(void)
{
  FILE *write;

  if((write = fopen("hello.usr","w")) == NULL)
  {
    printf("Failed to open the file %s\n", "hello.usr");
    exit(1);
  }

  if (fprintf(write,"Hello world!\n") > 0)
  {
    printf("Writing to the file was successful.\n");
    printf("Closing the program.\n");
  }

  fclose(write);

  return 0;
}
