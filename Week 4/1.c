#include <stdio.h>
#include <string.h>

int main() {
	char name[50];
	FILE *file = fopen("names.txt", "w");

	while (1) {
		printf("Enter a name to put in a file (END to exit): ");
		scanf("%50s", name);

		if (strcmp(name, "END") == 0) {
			break;
		}

		fprintf(file, "%s\n", name);
	}

	fclose(file);

	printf("Goodbye!\n");

	return 0;
}
