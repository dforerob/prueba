#include<iostream>
#include<cmath>

double sumadecuadrados(double m)

{
  if (m>=1)
    return ((1/pow(m,2))+sumadecuadrados(m-1));
  else
    return 0;
}
int main(void)

{
  double numeros=15;
  std::cout<< "suma de inversos cuadraticos hasta "<< numeros << "=" << sumadecuadrados(numeros)<< "\n";

    return 0;
}
