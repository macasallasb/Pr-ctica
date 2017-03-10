#include <iostream>
#include <cmath>

double f(double x);
double biseccion (double a, double b, double tol, double maxIter);

int main (void)
{
  double a, b, tol, raiz, maxIter;
  std::cin >> a, b, tol, raiz, maxIter;
  raiz = biseccion (a, b, tol, maxIter);
  std::cout << "La raiz es " << raiz << std::endl;
  return 0;
}

double f(double x)
{
  return (x-2);
}
double biseccion (double a, double b, double tol, double maxIter)
{
  double c;
  int noIter = 0;
  do
    {
      c = (a+b)/2;
      
      if (f(a) * f(c))<(0))
    {
      b = c;
    }
    else
      {
	a = c;
      }
  
  std::cout << noIter << "\t" << a << "\t" << b << "\t" << c << "\t" << f(c) << std::endl;
  noIter++;
}

while ((std::abs(f(c)) > tol) && (noIter < maxIter));
return c;
}
