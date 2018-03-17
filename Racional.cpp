#include "Racional.h"
#include <vector>

Racional::Racional(){
  numerador = 1;
  denominador = 1;
}

Racional::Racional(int pNumerador, int pDenominador){
  numerador = pNumerador;
  denominador = pDenominador;
  reducir();
}

void Racional::setNumerador(int pNumerador){
  numerador = pNumerador;
}

void Racional::setDenominador(int pDenominador){
  denominador = pDenominador;
}

void Racional::reducir(){
  if(denominador==1){
    cout <<numerador<<"/"<<denominador;
  }else{

    int b=2;
    while(b<=numerador){
      if(denominador%b==0 && numerador%b==0){
        denominador=denominador/b;
        numerador=numerador/b;
      }else{
        b++;
      }
    }
    cout << "Racional creado: "  << numerador << "/"<<denominador << endl;;

  }
  

}

//metodos sobrecargados

/*Racional Racional :: operator + (const Racional){
}*/

// Sobrecarga del operador + para la clase Pareja





Racional& operator -(const Racional &p1,const Racional &p2){
  return *(new Racional((p1.numerador*p2.denominador) + (-1*(p2.numerador*p1.denominador)), 
    p1.denominador*p2.denominador) );

  //a/b + c/d = (a*d + c*b)/bd
}


Racional& operator +(const Racional &p1,const Racional &p2){
  return *(new Racional((p1.numerador*p2.denominador) + (p2.numerador*p1.denominador), 
    p1.denominador*p2.denominador) );

  //a/b + c/d = (a*d - c*b)/bd
}

Racional& operator *(const Racional &p1,const Racional &p2){
  return *(new Racional(p1.numerador * p2.numerador, 
    p1.denominador*p2.denominador) );

  //a/b + c/d = (a*c) / (b* d)
}

Racional& operator /(const Racional &p1,const Racional &p2){
  return *(new Racional(p1.numerador*p2.denominador , p2.numerador*p1.denominador));

  //a/b + c/d = (a*d) / (b* c)
}

Racional& operator +=(Racional &p1, const Racional &p2){
   p1.numerador = (p1.numerador*p2.denominador) + (p2.numerador*p1.denominador); 
   p1.denominador = p1.denominador*p2.denominador;

  //a/b + c/d = (a*d - c*b)/bd
}

Racional& operator -=(Racional &p1,const Racional &p2){
  p1.numerador = (p1.numerador*p2.denominador) + (-1*(p2.numerador*p1.denominador)); 
   //p1.setNumerador((p1.getNumerador()*p2.getDenominador()) + (-1*(p2.getNumerador()*p1.getDenominador())))
   p1.denominador = p1.denominador*p2.denominador;
  //a/b + c/d = (a*d + c*b)/bd
}

Racional& operator *=(Racional &p1,const Racional &p2){
    p1.numerador = p1.numerador * p2.numerador;
    p1.denominador = p1.denominador*p2.denominador;

  //a/b + c/d = (a*c) / (b* d)
}

Racional& operator /=(Racional &p1,const Racional &p2){
    p1.numerador = p1.numerador * p2.denominador;
    p1.denominador = p2.numerador * p1.denominador;

  //a/b + c/d = (a*d) / (b* c)
}








