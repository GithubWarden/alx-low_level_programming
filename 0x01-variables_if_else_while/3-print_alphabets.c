#include <stdio.h>

/**
* Entry point - main function
* Description: prints alphabets in lower case and uppercase
* Returns 0 if successful
*/

int main(void)
{
	char lowercase;
	char uppercase;
	
	
	for (lowercase = 'a' ; lowercase <= 'z' ; lowercase++)
	{
	    putchar(lowercase);
	}
	for (uppercase = 'A' ; uppercase <= 'Z' ; uppercase++)
	{
	    putchar(uppercase);
	}
	putchar('\n');
	
	return (0);
}
