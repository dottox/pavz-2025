#ifndef RACIONAL_H
#define RACIONAL_H

class Racional {
  private:
    int numerador;
    int denominador;

  public:
    Racional(int, int);

    int getNumerador();
    int getDenominador();
    void setNumerador(int);
    void setDenominador(int);

    Racional suma(Racional);
    Racional diferencia(Racional);
    Racional producto(Racional);
    Racional cociente(Racional);
    bool igualdad(Racional);
};

#endif