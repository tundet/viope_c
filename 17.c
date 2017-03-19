#include <stdio.h>

/*
Write a program that calculates the number of hours worked within a specific period and prints the total number of hours,
the average length of a day and an itemisation of the hours entered. First, the program must ask how many days of working
hours shall be entered (max 30 days). After this, the program asks for the daily working hours. The program output shall
have one decimal place of precision.
*/

int main(void)
{
  float total = 0, hours[30];
  int i, days;

  printf("The program calculates the total hours worked during\n");
  printf("a specific period and the average length of a day.\n\n");

  printf("How many days:");
  scanf("%d", &days);

  for(i=0;i<days;i++){
    printf("Enter the working hours for day %d:",i+1);
    scanf("%f",&hours[i]);
    total += hours[i];
  }

  printf("\nTotal hours worked: %.1f\n", total);
  printf("Average length of day: %.1f\n", total/days);
  printf("Hours entered: ");

  for(i=0;i<days;i++){
    printf("%.1f ", hours[i]);
  }
  printf("\n");

  return 0;
}
