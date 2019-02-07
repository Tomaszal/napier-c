#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	printf("char min - 1: %d\n", CHAR_MIN - 1);
	printf("char max + 1: %d\n", CHAR_MAX + 1);
	printf("short min - 1: %d\n", SHRT_MIN - 1);
	printf("short max + 1: %d\n", SHRT_MAX + 1);
	printf("int min - 1: %d\n", INT_MIN - 1);
	printf("int max + 1: %d\n", INT_MAX + 1);
	printf("long min - 1: %d\n", LONG_MIN - 1);
	printf("long max + 1: %d\n", LONG_MAX + 1);
	printf("float min - 1: %d\n", FLT_MIN - 1);
	printf("float max + 1: %d\n", FLT_MAX + 1);
	printf("double min - 1: %d\n", DBL_MIN - 1);
	printf("double max + 1: %d\n", DBL_MAX + 1);

	return 0;
}
