#include "funcs.hpp"

int main() 
{
  const double step = 0.1, absError = 0.001;
  double left = 0.0, right = 0.0;
  size_t numberMax = 0;
  std::cin >> left >> right >> numberMax;
  if (!std::cin || right > 1 || left < -1)
  {
    std::cerr << "ERROR: incorrect input\n";
    return 1;
  }
  for (double x = left; x < right; x += step)
  {
    try
      {
        double val = nikonov::cos(x, numberMax, absError);
        double stdval = nikonov::stdcos(x);
        nikonov::stringOupout(x, val, stdval);
      }
      catch(const std::logic_error& e)
      {
        double stdval = nikonov::stdcos(x);
        nikonov::stringOupout(x, e, stdval);
      }
  }
  try
  {
    double val = nikonov::cos(right, numberMax, absError);
    double stdval = nikonov::stdcos(right);
    nikonov::stringOupout(right, val, stdval);
  }
  catch(const std::logic_error& e)
  {
    double stdval = nikonov::stdcos(right);
    nikonov::stringOupout(right, e, stdval);
  }
}
