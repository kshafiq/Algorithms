#include "FastPower.h"


namespace FastMath {

double FastMathAlgo::liner_pow_iterative(double x, long long n)
{
	double ans = 0;
	if (x == 0) return ans;
	ans = FastMathAlgo::liner_pow_impl_interative(x, FastMathAlgo::abs(n));
	return (n < 0) ? 1 / ans : ans;
}

double FastMathAlgo::liner_pow(double x, long long n)
{
	double ans = 0;
	if (x == 0) return ans;
	ans = liner_pow_impl(x, FastMathAlgo::abs(n));
	return (n < 0) ? 1 / ans : ans;
}

long long FastMathAlgo::abs(long long x)
{
   return (x < 0) ? -x : x;
}

double FastMathAlgo::pow(double x, long long n)
{
	double ans = 0;
	if (x == 0) return ans;
	ans = pow_impl(x, FastMathAlgo::abs(n));
	return (n < 0) ? 1/ans : ans;
}


double FastMathAlgo::pow_impl(double x, long long n)
{
	if (n == 0) return 1;	
	double v = FastMathAlgo::pow(x,n/2);
	v *= v;
	if (n % 2) v *= x;
	return v;
}

double FastMathAlgo::liner_pow_impl(double x, long long n)
{
	if (n == 0) return 1;
	return x * FastMathAlgo::liner_pow_impl(x, n-1);	
}

double FastMathAlgo::liner_pow_impl_interative(double x, long long  n)
{
	int i = 0;
	double ans = 1;
	while (i < n) {
		ans *= x;
		++i;
	}
	return ans;
}




}