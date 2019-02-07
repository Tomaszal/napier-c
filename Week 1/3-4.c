#include <stdio.h>

void print_triangle(int height) {
	// Print a triangle
	for (int i = 0; i < height; i++) {
		printf("%-*s", height - i - 1, "");

		for (int j = 0; j <= i * 2; j++) {
			printf("*");
		}

		printf("\n");
	}
}

void print_tree(int height) {
	print_triangle(height);

	printf("%*c\n", height, '*');
}

int main() {
	// Show the menu
	while (1) {
		int option;
		int height;

		// Prompt for the menu option and scan it
		printf("Menu:\n1) Print a triangle\n2) Print a tree\n0) Exit the program\nChoose an action: ");
		scanf("%d", &option);

		// Exit if 0 is entered
		if (option == 0) {
			break;
		}

		// Prompt for the figure height
		printf("Choose your figure height: ");
		scanf("%d", &height);
		
		// Print the desired figure
		if (option == 1) {
			print_triangle(height);
		} else if (option == 2) {
			print_tree(height);
		}
	}

	printf("Goodbye!\n");

	return 0;
}
