/* expm1 example */
#include <stdio.h>      /* printf */
#include <math.h>       /* expm1 */
#include <conio.h>

/*	Source by CPPReference
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main() {
	double param, result;
	param = 1.0;
	result = expm1(param);
	printf("expm1 (%f) = %f.\n", param, result);
	_getch();
	return 0;
}