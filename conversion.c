#include <conversion.h>

float cmToInches(float cm) {
	return cm / constant; 
}

float InchesToCm(float inches) {
	return inches * constant;
}
