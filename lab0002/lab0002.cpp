// lab0002.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#define _USE_MATH_DEFINES
#include "math.h"
#define FUNC(x) log(1+2*x)
#define Q(x,n) (-2*(x)*(n))/((n)+1)




int main()
{
	double x = 0.5, S = 0.0, a = 2 * x;
	unsigned int n, N = 10;
	for (n = 1; n <= N; ++n) {
		S += a;
		a *= Q(x, n);
	}
	double y = FUNC(x), tol = fabs(S - y);
	printf("Sum:\t\t%.7f\nControl:\t%.7f\nTolerance:\t%.7f\n", S, y, tol);
	system("pause");
    return 0;
}

