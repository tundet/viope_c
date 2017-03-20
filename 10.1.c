#include <stdio.h>

/*
Write a program that asks for the user's first and last name and saves these into a file named by the user.
The program must start by asking for the first name. The last name is entered next, followed by the desired file name.
The first part of the file name may have a maximum of 8 characters and the second part may have 3 (for example: personal.usr).
The file must reside in the same directory as the program.
The last name can have a maximum of 20 characters, the first name 15.
*/

int main(void)
{
  FILE *write;
  char fileName[11+1], first_name[15+1], last_name[20+1];

  printf("The program saves your first and last name into a file.\n");
  printf("Enter your first name:");
  scanf("%s",first_name);
  printf("Enter your last name:");
  scanf("%s",last_name);

  printf("File where you want to save your name:");
  scanf("%s",fileName);

  if((write = fopen(fileName,"w")) == NULL)
  {
    printf("Failed to open the file %s\n", fileName);
    exit(1);
  }

  if (fprintf(write,"%s %s\n", first_name, last_name) > 0)
  {
    printf("\nSuccessfully saved the data!\n");
  }

  fclose(write);
  return 0;
}
