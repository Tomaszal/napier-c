#include <stdio.h>

// Define the menu choicds
enum CHOICE {
	EXIT = 0,
	READ = 1,
	PRINT = 2
};

// A data structure containing student information
struct student {
	unsigned int matric;
	char name[50];
	char address[150];
};

// Function to read student information from stdin
void read_student(struct student *s) {
	printf("Enter student's matric number: ");
	scanf("%d", &(s->matric));
	printf("Enter student's name: ");
	scanf("%s", s->name);
	printf("Enter student's address: ");
	scanf("%s", s->address);
}

// Function to print student information to stdout
void print_student(struct student *s) {
	printf("Student's matric number: %d\n", s->matric);
	printf("Student's name:          %50s\n", s->name);
	printf("Student's address:       %150s\n", s->address);
}

int main() {
	int flag = 1;
	struct student s;

	while(flag) {
		int choice;

		printf("1) Enter student information\n");
		printf("2) Print student information\n");
		printf("0) Exit\n");
		printf("Enter your choice: ");

		scanf("%d", &choice);

		switch (choice)
		{
			case EXIT:
				flag = 0;
				continue;
			case READ:
				read_student(&s);
				break;
			case PRINT:
				print_student(&s);
				break;
		}
	}

	return 0;
}
