#ifndef FAST_POWER_HEADER_INCLUDED
#define FAST_POWER_HEADER_INCLUDED

namespace FastMath {
class FastMathAlgo {
public:
  static double liner_pow(double x, long long n);
  static double liner_pow_iterative(double x, long long n);
  static double pow(double x, long long n);
  static long long abs(long long x);
private:
  static double pow_impl(double x, long long n);
  static double liner_pow_impl(double x, long long n);
  static double liner_pow_impl_interative(double x, long long n);
  

};

} // namespace FastMath


#endif // FAST_POWER_HEADER_INCLUDED


