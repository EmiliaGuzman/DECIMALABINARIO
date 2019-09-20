#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int numero, exp, digito,c=1;
    float base=10.0;
    double binario;
   cout << "Introduce numero: ";
   cin >> numero;
   exp=0;
   binario=0;
   for(int i=0; i<exp; i++)
    {
        c=c*base;
    }
   while(numero/2!=0)
   {
           digito = numero % 2;
           binario = binario + digito * c;
           exp++;
           numero=numero/2;
   }
   binario = binario + numero * c;
   cout << fixed << setprecision(0);
   cout << "binario: " << binario << endl;
   return 0;
}
