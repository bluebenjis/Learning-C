#include <stdio.h>

// A program to count blanks(" "), tabs(\t), and newlines(\n)

int main()
{
	int c; // current character
	int nb; // number of blanks
	int nt; // number of tabs
	int nn; //number of newlines

	nb = nt = nn = 0; // initialize the variables

	while((c = getchar()) != EOF){
		if(c == ' ')
			nb++; //increase the count

		if(c == '\t')
			nt++; //increase the count
		
		if(c == '\n')
			nn++; //increase the count

		printf("Blanks: %d, Tabs: %d, Newlines: %d\n", nb, nt, nn);
	}
}