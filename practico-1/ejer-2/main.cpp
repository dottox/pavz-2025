#include <iostream>

#include "defs/racional.h"

using namespace std;

int main() {
  Racional r1(1, 2);
  Racional r2(3, 4);

  Racional r3 = r1.suma(r2);
  cout << "Suma: " << r3.getNumerador() << "/" << r3.getDenominador() << endl;

  r3 = r1.diferencia(r2);
  cout << "Diferencia: " << r3.getNumerador() << "/" << r3.getDenominador() << endl;

  r3 = r1.producto(r2);
  cout << "Producto: " << r3.getNumerador() << "/" << r3.getDenominador() << endl;

  r3 = r1.cociente(r2);
  cout << "Cociente: " << r3.getNumerador() << "/" << r3.getDenominador() << endl;

  cout << "Igualdad: " << r1.igualdad(r2) << endl;

  return 0;
}