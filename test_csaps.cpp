#include <iostream>

#include "csaps.h"

int main(int argc, char** argv)
{
  csaps::DoubleVector xdata(21);
  xdata << 
    0., 0.31415927, 0.62831853, 0.9424778, 1.25663706, 1.57079633, 1.88495559,
    2.19911486, 2.51327412, 2.82743339, 3.14159265, 3.45575192, 3.76991118,
    4.08407045, 4.39822972, 4.71238898, 5.02654825, 5.34070751, 5.65486678,
    5.96902604, 6.28318531;

  csaps::DoubleVector ydata(21);
  ydata <<
    -0.03084805, 0.32122787, 0.58155803, 0.83755285, 0.9790541, 0.97725926, 
    0.92870294, 0.83920421, 0.63359919, 0.34661026, -0.01421827, -0.30891748, 
    -0.56943896, -0.78774679, -0.96403144, -0.99388038, -0.9507482, -0.85764015, 
    -0.56050259, -0.27075288, -0.0135114;

  size_t pcount = 120;

  csaps::UnivariateCubicSmoothingSpline sp(xdata, ydata);
  csaps::DoubleVector yidata = sp(pcount);

  return 0;
}