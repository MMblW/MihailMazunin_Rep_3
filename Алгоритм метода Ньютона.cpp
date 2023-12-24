#include <iostream>
#include <cmath>
using namespace std;
float F (float x)
{
  return 3 * x - 4 * log (x) - 5;
}

float dif (float x)
{
    return 3 - (4 / x);
}

int
main ()
{
  float a, b, E, c, x;
  c = 2.1;
  a = 2;
  b = 4;
  E = 0.000001;
  while (abs (b - a) > E)
    {
      c = c - (F(c)/dif(c));
      if (F (a) * F (c) > 0)
	a = c;
      else
	b = c;

    }
  x = c - (F(c)/dif(c));
  cout << i << endl;
  cout << x;
}






