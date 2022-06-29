#include <stdio.h>

// a program to copy its input to its output, replacing each string of one or more blanks by a single blank

int main()
{
	int c;
	int bc; // blanks counter
	while((c = getchar()) != EOF)
	{
		if(c != ' ')
		{
			putchar(c);
			bc = 0;
		} else 
		{
			if(bc == 0)
			{
				putchar(c);
			} else
			{

			}
		}

		c = getchar(); 
	}
}