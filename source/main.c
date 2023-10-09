#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float height, weight, BMI;

	printf("Enter your height(m): ");
	scanf("%f", &height);

	printf("Enter your weight(kg): ");
	scanf("%f", &weight);

	BMI = weight / (height*height);

	printf("Your BMI value: %f\n", BMI);

	printf("\nSuggest BMI values\n");

	printf("UnderWeight: \t less than 18.5\n");
	printf("Normal: \t between 18.5 and 24.9\n");
	printf("Overweight: \t between 25 and 29.9\n");
	printf("Obese: \t 30 or greater\n");

	return 0;
}