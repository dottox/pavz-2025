#include <iostream>

#include "defs/racional.h"

using namespace std;


int main() {
  // Racional r1(1, 2);
  // Racional r2(3, 4);

  // Racional r3 = r1.suma(r2);
  // cout << "Suma: " << r3.getNumerador() << "/" << r3.getDenominador() << endl;

  // r3 = r1.diferencia(r2);
  // cout << "Diferencia: " << r3.getNumerador() << "/" << r3.getDenominador() << endl;

  // r3 = r1.producto(r2);
  // cout << "Producto: " << r3.getNumerador() << "/" << r3.getDenominador() << endl;

  // r3 = r1.cociente(r2);
  // cout << "Cociente: " << r3.getNumerador() << "/" << r3.getDenominador() << endl;

  // cout << "Igualdad: " << r1.igualdad(r2) << endl;


  Racional r1(2,3), r2;
  Racional r3(4), r4 = r1;

  if (r1 == r2)
    r1 = r1 + r2;
  else
    r1 = r1 - r2;
  if (r3 != r4)
    r3 = r3 * r4;
  else
    r3 = r3 / r4;
  if (r1 == 2)
    r1 = r1 + 1;
  else
    r1 = r1 - 1;
  if (r3 != 3)
    r3 = r3 * 2;
  else
    r3 = r3 / 2;

  r3 = r2 * 3; 
  if ((r2 + 2) == 4) 
      r3 = r2 / 1;
    
  return 0;
}