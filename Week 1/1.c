#include <stdio.h>
#include <string.h>

void print_star_line(int n) {
	// Print n stars
	for (int i = 0; i < n; i++) {
		printf("*");
	}

	// Print a new line
	printf("\n");
}

int main(int argc , char **argv) {
	// Declare character arrays to store name
	char first_name[50];
	char last_name[50];

	// Prompt for first name
	printf("Please enter your first name: ");
	scanf("%50s", first_name);

	// Prompt for last name
	printf("Please enter your last name: ");
	scanf("%50s", last_name);

	// Count the lenght of the lines
	// Add 2 chars for stars and 3 for spaces
	int lenght = strlen(first_name) + strlen(last_name) + 5;

	// Print end result
	print_star_line(lenght);
	printf("* %s %s *\n", first_name, last_name);
	print_star_line(lenght);

	return 0;
}
