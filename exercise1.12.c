#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside of a word

// print input one word per line

int main()
{
	int c, state;
	state = OUT;

	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		else 
		{
			if(state == OUT)
				printf("\n");
				
			putchar(c);
			state = IN;
		}
	}
}