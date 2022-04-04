#include <iostream>
#include "FibonacchiAndPhi.h"

void FibonacchiAndPhi::CalculatePhi()
{
	int n = 0;
	double prev1 = 1.0;
	double prev2 = 1.0;

	double current = 0.0;

	printf("How many Fib. numbers to generate? ");
	scanf_s("%d", &n);

	while (n > 0)
	{
		current = prev1 + prev2;
		prev2 = prev1;
		prev1 = current;

		printf("%f\n", current);
		printf("ratio = %.15f\n", prev1/prev2); //print with 15 points of precision
		--n;
	}


}
