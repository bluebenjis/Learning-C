#include <stdio.h>
// count blanks, tabs, and newlines
int main()
{
	int c;
	double nb, nt, nn = 0;
	c = getchar();
	while(c != EOF)
	{
		if(c == ' ')
			++nb;

		if(c == '\t')
			++nt;

		if(c == '\n')
			++nn;

		c = getchar();
	}

	printf("Blanks: %.0f Tabs: %.0f Newlines: %.0f", nb, nt, nn);
}