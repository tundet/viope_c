#include<stdio.h>

/*
Write a program that prints all the numbers in the phone directory to the screen. The file for reading the numbers is the
same as in the previous exercise (phonedir.txt). Upon execution, the program opens the file, reads the data and prints it.
*/

struct phonebook{
	char firstname[20+1];
	char lastname[20+1];
	char phonenumber[20+1];
};

int main(){

	FILE *phonedir = fopen("phonedir.txt", "r");
	char index[2+1];
	struct phonebook person[50];

	if(phonedir==NULL){
		printf("Error\n");
	}

	else{

		fscanf(phonedir, "%s", &index);

		for(int i=0; i<4; i++){

			fscanf(phonedir, "%s%s%s", &person[i].firstname[0], &person[i].lastname[0], &person[i].phonenumber[0]);

			printf("%s %s %s\n", person[i].firstname, person[i].lastname, person[i].phonenumber);
		}
	}
	fclose(phonedir);
	return 0;
}