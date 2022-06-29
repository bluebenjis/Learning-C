#include <stdio.h>
// copy I to O one character at a time
int main()
{
	int c;
	while((c = getchar()) != EOF)
	{
		putchar(c);
		c = getchar();
	}
}