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



