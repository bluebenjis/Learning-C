#include <stdio.h>
// copy input to output replacing strings of one or more blanks with a single blank
int main()
{
	int c; 
	int lastBlank = 0;

	c = getchar();
	while(c != EOF)
	{
		if(c == ' ')
		{
			if(lastBlank == 1)
			{
				;
			} else 
			{
				putchar(c);
				lastBlank = 1;
			}
		} else 
		{
			putchar(c);
		}

		c = getchar();
	}
}