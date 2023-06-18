#include <stdio.h>

/**
* Entry point - main function
* Description: prints alphabets in lower case except q and e
* Returns 0 if successful
*/

int main(void)
{
	char lowercase;
	
	for (lowercase = 'a' ; lowercase <= 'z' ; lowercase++)
	{
	    if (lowercase != 'q' && lowercase != 'e')
	    {
	    putchar(lowercase);
	    }
	}

	putchar('\n');
	
	return (0);
}
