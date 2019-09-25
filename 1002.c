#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
	double raio, resposta;

	scanf("%lf", &raio);
	resposta = PI*(pow(raio, 2));
	
    printf("A=%.4f\n", resposta);

	return 0;
}