#ifndef SEGMENTO_H
#define SEGMENTO_H

#include "punto.h"

class Segmento {
  private:
    Punto* p1;
    Punto* p2;

  public:
    Segmento(Punto*, Punto*);
    
    Punto* getP1();
    Punto* getP2();
    void setP1(Punto*);
    void setP2(Punto*);

    double length();
};

#endif