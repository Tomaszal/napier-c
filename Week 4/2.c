#include <stdio.h>

int main() {
	char name[50];
	FILE *file = fopen("names.txt", "r");

	while (fgets(name, 50, file) != NULL) {
		printf("%s", name);
	}

	fclose(file);

	return 0;
}
