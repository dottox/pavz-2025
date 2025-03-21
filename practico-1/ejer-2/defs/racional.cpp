#include "racional.h"


Racional::Racional() {

}

Racional::Racional(int num) {
  this->numerador = num;
  this->denominador = 1;
}

Racional::Racional(int num, int den) {
  this->numerador = num;
  this->denominador = den;
}

int Racional::getNumerador() {
  return this->numerador;
}

int Racional::getDenominador() {
  return this->denominador;
}

void Racional::setNumerador(int num) {
  this->numerador = num;
}

void Racional::setDenominador(int den) {
  this->denominador = den;
}

Racional Racional::suma(Racional r) {
  int num = this->numerador * r.denominador + r.numerador * this->denominador;
  int den = this->denominador * r.denominador;

  return Racional(num, den);
}

Racional Racional::diferencia(Racional r) {
  int num = this->numerador * r.denominador - r.numerador * this->denominador;
  int den = this->denominador * r.denominador;

  return Racional(num, den);
}

Racional Racional::producto(Racional r) {
  int num = this->numerador * r.numerador;
  int den = this->denominador * r.denominador;

  return Racional(num, den);
}


Racional Racional::cociente(Racional r) {
  int num = this->numerador * r.denominador;
  int den = this->denominador * r.numerador;

  return Racional(num, den);
}

bool Racional::igualdad(Racional r) {
  return this->numerador * r.denominador == r.numerador * this->denominador;
}

Racional Racional::operator+(Racional r) {
  int num = this->numerador * r.denominador + r.numerador * this->denominador;
  int den = this->denominador * r.denominador;

  return Racional(num, den);
}

Racional Racional::operator-(Racional r) {
  int num = this->numerador * r.denominador - r.numerador * this->denominador;
  int den = this->denominador * r.denominador;

  return Racional(num, den);
}

Racional Racional::operator*(Racional r) {
  int num = this->numerador * r.numerador;
  int den = this->denominador * r.denominador;

  return Racional(num, den);
}

Racional Racional::operator/(Racional r) {
  int num = this->numerador * r.denominador;
  int den = this->denominador * r.numerador;

  return Racional(num, den);
}

bool Racional::operator==(Racional r) {
  return this->numerador * r.denominador == r.numerador * this->denominador;
}

bool Racional::operator!=(Racional r) {
  return this->numerador * r.denominador != r.numerador * this->denominador;
}

Racional Racional::operator+(int num) {
  int num2 = this->numerador + num;
  int den = this->denominador;

  return Racional(num2, den);
}

Racional Racional::operator-(int num) {
  int num2 = this->numerador - num;
  int den = this->denominador;

  return Racional(num2, den);
}

Racional Racional::operator*(int num) {
  int num2 = this->numerador * num;
  int den = this->denominador;

  return Racional(num2, den);
}

Racional Racional::operator/(int num) {
  int num2 = this->numerador;
  int den = this->denominador * num;

  return Racional(num2, den);
}

bool Racional::operator==(int num) {
  return this->numerador == num * this->denominador;
}

bool Racional::operator!=(int num) {
  return this->numerador != num * this->denominador;
}