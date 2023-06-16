#include <studio.h>

int main(void) {
	int size_of_char = sizeof(char);
	printf("Size of a char: %d byte\(s\)\n", size_of_char);

	int size_of_int = sizeof(int);
	printf("Size of an int: %d byte\(s\)\n", size_of_int);


	int size_of_long_int = sizeof(long_int);
	printf("Size of a long int: %d byte\(s\)\n", size_of_long_int);

	int size_of_long_long_int = sizeof(long_long_int);
	printf("Size of a long long int: %d byte\(s\)\n", size_of_long_long_int);

	int size_of_float = sizeof(float);
	printf("Size of a float: %d byte\(s\)\n", size_of_float);
	return (0);
}
