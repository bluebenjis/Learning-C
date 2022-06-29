#include <stdio.h>
// verifying that getchar() != EOF; is either 1 or 0
int main()
{
	int c;
	c = (getchar() != EOF);
	printf("%d", c);
}