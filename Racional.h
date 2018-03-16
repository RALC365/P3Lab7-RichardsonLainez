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

};

#endif
