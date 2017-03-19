#include <stdio.h>

/*
Write a program that first asks the user for his/her gender and then for his/her age.
Finally, the program prints a statement in accordance with the following instructions:
Male 0 to 55 years: "You are a man in your best years!"
Male 56-100 years: "You are a wise man!"
Female 0-55 years: "You are a beauty!"
Female 56-100 years: "You look young for your age!"
Otherwise "An error occurred in the program!"
The age shall be processed as an integer variable and the gender as a character variable (m/f).
You do not need to account for upper case letters.
*/

int main(void)
{
    char gender;
    int age;
    printf("Are you male or female (m/f)?");
	gender = getchar();

    printf("Enter your age:");
    scanf("%d", &age);
    switch (gender)
    {
        case 'm': case 'M':
        {
                if (age >= 0 && age < 56) {
                    printf("You are a man in your best years!\n");
                    break;
                }
                else if (age >= 56 && age < 101) {
                    printf("You are a wise man!\n");
                    break;
                }
        }
        case 'f': case 'F':
            {

                if (age >= 0 && age < 56) {
                    printf("You are a beauty!\n");
                    break;
                }
                else if (age >= 56 && age < 101) {
                    printf("You look young for your age!\n");
                    break;
                }
            }
        default:
            printf("An error occurred in the program!");
    }
}