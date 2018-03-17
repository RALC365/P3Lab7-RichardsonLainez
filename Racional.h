#include <string>
#include <fstream>
#include <iostream>
#include <vector>

#ifndef RACIONAL_H
#define RACIONAL_H


using namespace std;

class Racional{
  private:
   int numerador, denominador;
  public:
   Racional();
   //numerador, denominador
   Racional(int, int);
   //declaración e implementación inline
   int getNumerador(){ return numerador;}
   int getDenominador(){ return denominador;}

   void setNumerador(int);
   void setDenominador(int);
   void reducir();

   //Metodos sobrecargados
   //const Racional operator + (const Racional);
   friend Racional& operator +(const Racional &p1,const Racional &p2);
   friend Racional& operator -(const Racional &p1,const Racional &p2);
   friend Racional& operator *(const Racional &p1,const Racional &p2);
   friend Racional& operator /(const Racional &p1,const Racional &p2);

   //operacion y asignacion
   friend Racional& operator +=(Racional &p1 ,const Racional &p2);
   friend Racional& operator -=(Racional &p1,const Racional &p2);
   friend Racional& operator *=(Racional &p1,const Racional &p2);
   friend Racional& operator /=(Racional &p1,const Racional &p2);


};



#endif
