#ifndef PUNTO_H
#define PUNTO_H

class Punto {
  private:
    int x;
    int y;
  
  public:
    Punto(int, int);

    int getX();
    int getY();
    void setX(int);
    void setY(int);
};

#endif