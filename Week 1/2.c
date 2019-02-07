#include <stdio.h>

int main() {
	char name[50];

	while(1) {
		int grade_total = 0;
		int grade_count = 0;

		// Prompt for student name and scan it
		printf("Please enter your name (0 to exit): ");
		scanf("%s", name);

		// Exit if 0 is entered
		if (name[0] == '0') {
			break;
		}

		// Prompt for student grades
		while(1) {
			int grade;

			// Prompt for a grade and scan it
			printf("Enter a grade (-1 to finish): ");
			scanf("%d", &grade);

			// Finish if -1 is entered
			if (grade == -1) {
				break;
			}

			// Sum up grades
			grade_total += grade;
			grade_count++;
		}

		// Print average grade
		printf("The average grade of %s is %.2f.\n", name, (float)grade_total / grade_count);
	}

	printf("Goodbye!\n");

	return 0;
}
