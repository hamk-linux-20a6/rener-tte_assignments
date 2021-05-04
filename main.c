#include <conversion.h>

#include <stdio.h>

int main() {
	printf("How many inches?");

	float inches = 0;

	int paluuarvo = scanf("%f", &inches);

	if (paluuarvo == 1) {
		printf("%f inches is %f\n", inches, InchesToCm(inches));
	}
	else {
		printf("Invalid input. Please imput valid floating point number.\n");
	}

	return 0;
}
