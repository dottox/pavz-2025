#ifndef RACIONAL_H
#define RACIONAL_H

class Racional {
  private:
    int numerador;
    int denominador;

  public:
    Racional();
    Racional(int);
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

    Racional operator+(Racional);
    Racional operator-(Racional);
    Racional operator*(Racional);
    Racional operator/(Racional);
    bool operator==(Racional);
    bool operator!=(Racional);

    Racional operator+(int);
    Racional operator-(int);
    Racional operator*(int);
    Racional operator/(int);
    bool operator==(int);
    bool operator!=(int);
};

#endif