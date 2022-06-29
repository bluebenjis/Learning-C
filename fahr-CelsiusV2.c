#include <stdio.h>
// print the Fahrenheit-Celsius table for fahr = 0, 20,...,300;
int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0.0; // lower limit of the temperature scale
	upper = 300.0; // upper limit of the temperature scale
	step = 20.0; // step size

	fahr = lower;
	printf("%s %s\n", "Fahr", "Cels");
	while(fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}
}