#include <iostream>

#include "defs/punto.h"
#include "defs/segmento.h"

using namespace std;

int main() {
  Punto* p1 = new Punto(0, 0);
  Punto* p2 = new Punto(3, 4);
  Segmento* s = new Segmento(p1, p2);

  cout << "Segmento length: " << s->length() << std::endl;

  p1->setX(1);
  p1->setY(1);
  p2->setX(5);
  p2->setY(6);

  cout << "Segmento length: " << s->length() << std::endl;

  delete p1;
  delete p2;
  delete s;

  return 0;
}