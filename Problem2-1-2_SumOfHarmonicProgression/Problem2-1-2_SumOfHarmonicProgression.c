// Problem2-1-2_SumOfHarmonicProgression.c : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning (disable : 4996)


int main()
{
	unsigned int n;
	scanf("%u", &n);
	double sum = 0;
	double term;
	for (size_t i = 0; i < n; i++)
	{
		term = 1. / (i + 1);
		sum += term;
	}
	printf("%lf", sum);
    return 0;
}

