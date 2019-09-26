#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	double  A, B, result;

	scanf("%lf %lf", &A, &B);

	A *= 3.5;
	B *= 7.5;

	if(((A || B) >= 0.0) || (A || B) <= 10.0){

		result = (A+B)/11.0;
		printf("MEDIA = %.5lf\n", result);
	}
	return 0;
}