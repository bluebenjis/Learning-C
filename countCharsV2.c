#include <stdio.h>
// count charactes from input; version 2
int main()
{
	double nc;
	for(nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}