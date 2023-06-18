#include <stdio.h>

/**
* Entry point - main function
* Description: prints alphabets in lower case
* Returns 0 if successful
*/

int main(void)
{
	char lowercase;
	
	for (lowercase = 'a' ; lowercase <= 'z' ; lowercase++)
	{
	    putchar(lowercase);
	}
	putchar('\n');
	
	return (0);
}
