#include <iostream>
#include <cmath>
using namespace std;
float
F (float x)
{
  return 3 * x - 4 * log (x) - 5;
}

int
main ()
{
  float a, b, E, c, x;
  a = 2;
  b = 4;
  E = 0.000001;
  while (abs (b - a) > E)
    {
      c = (b + a) / 2;
      if (F (a) * F (c) > 0)
	a = c;
      else
	b = c;

    }
  x = (a + b) / 2;
  cout << i << endl;
  cout << x;
}


