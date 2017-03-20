#include <stdio.h>

/*
Write a program that asks for the students' exam scores (using integers 4 to 10) and calculates the average.
The program must accept scores until entry is terminated by a negative integer.
Finally, the program prints out the number of scores and the calculated average with two decimal places of precision.
*/

int main(void)
{
  int score = 1, scores = 0;
  float average, sum = 0;

  printf("The program calculates the average of scores you enter.\n");
  printf("End with a negative integer.\n");

  do {
    printf("Enter score (4-10):");
    scanf("%d", &score);
    if(score < 0)
    {
    /* exit the loop when score < 0 */
      break;
    }
    sum += score;
    scores++;
  } while (scores >= 0);

  average = sum / scores;

  printf("You entered %d scores.\n", scores);
  printf("Average score: %.2f\n", average);

  return 0;
}
