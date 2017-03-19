#include <stdio.h>

/*
Write a program that prompts the user for a word (max 15 lower-case letters) and calculates the number of vowels
(a, e, i, o, u, y) in the word. Hint: You have learned to compare the value of a character variable to 'a', for example.
You can use an index to refer to single characters in a string array. (char[] = "word"; word[1] == 'a';)
*/

int main(void)
{
  char word[15+1];
  int i, wovels = 0;

  printf("The program calculates the number of vowels.\n");
  printf("Enter a word:");
  scanf("%s", word);

  for(i=0;i<16;i++)
  {
    if(word[i] == '\0')
    {
      break;
    }
    else if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y' )
    {
      wovels++;
    }
  }

  printf("The word contains %d vowels.\n", wovels);

  return 0;
}
