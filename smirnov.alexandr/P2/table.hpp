#ifndef TABLE_HPP
#define TABLE_HPP
#include <cstddef>

namespace smirnov
{
  void outString(double x, size_t k, double error);
  void outTable(double left, double right, size_t k, double error, double step);
}
#endif

