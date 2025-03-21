#include "segmento.h"

#include <cmath>

Segmento::Segmento(Punto* p1, Punto* p2) {
  this->p1 = p1;
  this->p2 = p2;
}
    
Punto* Segmento::getP1() {
  return p1;
}

Punto* Segmento::getP2() {
  return p2;
}

void Segmento::setP1(Punto* p1) {
  this->p1 = p1;
}

void Segmento::setP2(Punto* p2) {
  this->p2 = p2;
}

double Segmento::length() {
  return sqrt(pow(p2->getX() - p1->getX(), 2) + pow(p2->getY() - p1->getY(), 2));
}