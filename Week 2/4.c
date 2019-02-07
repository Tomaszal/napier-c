#include <stdio.h>
#include <string.h>

// Define the menu choicds
enum CHOICE {
	EXIT = 0,
	TRIANGLE = 1,
	TREE = 2,
	TEXT = 3
};

void print_triangle(int height) {
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

void print_text_stars(char *text) {
	int length = strlen(text) + 4;

	for (int i = 0; i < length; i++) {
		printf("*");
	}

	printf("\n* %s *\n", text);

	for (int i = 0; i < length; i++) {
		printf("*");
	}

	printf("\n");
}

int main() {
	int flag = 1;

	while(flag) {
		int choice;
		int size;
		char text[50];

		printf("1) Print a triangle\n");
		printf("2) Print a Christmass tree\n");
		printf("3) Print text surrounded by stars\n");
		printf("0) Exit\n");
		printf("Enter your choice: ");

		scanf("%d", &choice);

		switch (choice)
		{
			case EXIT:
				flag = 0;
				continue;
			case TRIANGLE:
				printf("Enter the triangle's size: ");
				scanf("%d", &size);
				print_triangle(size);
				break;
			case TREE:
				printf("Enter the Christmass tree's size: ");
				scanf("%d", &size);
				print_tree(size);
				break;
			case TEXT:
				printf("Enter the desired text: ");
				scanf("%50s", text);
				print_text_stars(text);
				break;
		}
	}

	return 0;
}
