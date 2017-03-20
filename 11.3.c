#include<stdio.h>
#include<string.h>

/*
Write a program for removing a specific person's data from the directory. The program asks for a first name followed by
a last name. The program checks if the person's data can be found. If the person is in the directory, the data is removed.
Otherwise print an error message.
*/

struct phonebook{
	char firstname[20+1];
	char lastname[20+1];
	char phonenumber[20+1];
};

int main(){

	FILE *phonedir;
	struct phonebook person[50];
	char inputfirst[20+1];
	char inputlast[20+1];
	int personcount;
	int index;

	if ((phonedir = fopen("phonedir.txt", "r")) == NULL) {
		printf("Error\n");
	}else{

		fscanf(phonedir, "%d", &personcount);

		for(int i=0; i<personcount; i++){

			int ret = fscanf(phonedir, "%s%s%s", &person[i].firstname[0], &person[i].lastname[0], &person[i].phonenumber[0]);
			//printf("%s %s %s\n", person[i].firstname, person[i].lastname, person[i].phonenumber);

		}

		fclose(phonedir);
		printf("Enter first name:");
		scanf("%s", &inputfirst[0]);
		printf("Enter last name:");
		scanf("%s", &inputlast[0]);

		for(int i=0; i<personcount; i++){

			int firstmatch = strcmp(inputfirst, person[i].firstname);
			int lastmatch = strcmp(inputlast, person[i].lastname);

			if(firstmatch == 0 && lastmatch == 0){
				personcount -= 1;
				index = i;
				//printf("%s %s", person[index].firstname, person[index].lastname);
			}
		}
	}

	if ((phonedir = fopen("phonedir.txt", "w")) == NULL) {
		printf("Error\n");

	}else{

		for(int i=0; i<index; i++){
			fprintf(phonedir, "%d %s %s %s\n", personcount, person[i].firstname, person[i].lastname, person[i].phonenumber);
		}

		for(int i=index+1; i<personcount; i++){
			fprintf(phonedir, "%s %s %s\n", person[i].firstname, person[i].lastname, person[i].phonenumber);
		}

		fclose(phonedir);

		printf("Data removed from the directory.");

	}
	return 0;
}