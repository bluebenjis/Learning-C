#include <stdio.h>
// print the Celsius-Fahrenheit table for cels = 0, 20,..., 300;
int main()
{
	float cels, fahr;
	float lower, upper, step;

	lower = 0.0;//lower limit of temperature scale
	upper = 300.0; //upper limit of temperature scale
	step = 10.4; //step size

	cels = lower;
	printf("Cels\tFahr\n");
	while(cels <= upper)
	{
		fahr = (cels * 9.0/5.0) + 32.0;
		printf("%3.1f %8.1f\n", cels, fahr);
		cels += step;
	}
}