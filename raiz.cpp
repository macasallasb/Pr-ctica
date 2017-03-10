//Programa de cálculo de raíces por diversos métodos
#include <iostream>
#include <cmath>

//prec: tolerancia en el cálculo de la raíz
//fprec: máximo de la función en el valor aceptado para la raíz
//numiter: número máximo de iteraciones

double prec = 1.e-8, fprec = 1.e-8;
int numiter = 100;

//f: función, fd: derivada.
double f(double x);
double fd(double x);
double biseccion(double, double);
double secante(double, double);
double regulafalsi(double, double);
double newton(double);

//Definición de la función y derivadas
double f(double x)
{
  //Función
  return x * x-1;
}
double fd(double x)
{
  //Primera derivada
  return 2*x;
}

int main (void)
{
  /* Programa para comparar diversos métodos de cálculo de raíces */
  double x0, x1;
  double biseccion(double x0, double x1);
  
}

double biseccion((double x0);(double x1));
{
  double f(double x);
  std::cout << "Método Biseccion" << std::endl;
  std::cout.presicion(nprec);
  std::cout << "Itireración" << x << f(x) << std::endl;
  int n = 1;
  double x2, f0, f1, f2;
  f0 = f(x0);
  fi = f(x1);
  f2 = f1;

  if (f0 * f1 >= 0)
    {
      std::cout << "No hay raiz entre x0 y x1" << std::endl;
      break;
    }
  while (abs(x0 - x1) >= prec)
    {
      if (n >= numiter)
	{
	  std::cout << " num. máx. de itiraciones excedido en biseccion" << std::endl;
	  break;
	}
      x2 = (x0 + x1)/2;
      f2 = f(x2);
      std::cout << setw(10) << n << "  " << setw(10) << x2 << "  " << f2 << endl;

      if (f2 * f0 < 0)
	{
	  x1 = x2;
	  fi = f2;
	}
      if (f2 * f1 < 0)
	{
	  x0 = x2;
	  fo = f2;
	}
      if (f2==0) break;
      n++;
    }
  std::cout << "biseccion   " << n - 1 << " iteraciones   " << "raiz = " << setpresicion(nprec) << setw(nwidth) << x2 << "función = " << f2 << std::endl << std::endl << std::endl;

  return 0;
}

  
  
  

    
    


