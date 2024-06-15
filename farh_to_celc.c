#include <stdio.h>

int get_farh_celc_conversion()
{
	// celcuis = 5 * (fahr -32) /9
	float max, min, step;
	float fahr, celcius;

	step = 20;
	fahr = 0;
	max = 200;
	min = 0;
	while (fahr <= max)
	{
		celcius = (5.0/9.0) * (fahr-32.0);
		printf("%7.2f %6.2f\n", fahr, celcius);
		fahr = fahr + step;
	}
}

int celcuis_to_fahr()
{
	float max, step;
	float celcius, fahr;

	max = 40;
	step = 5;
	celcius = -32;

	while (celcius <= max)
	{
		fahr= (5/9) * (celcius);
		printf("%7.2f %6.2f\n", celcius, fahr);
		celcius = celcius + step;
	}
}
int main()
{
	celcuis_to_fahr();
}
