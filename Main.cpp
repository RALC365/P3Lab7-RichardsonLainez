#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "Racional.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>


#include <sstream>
#include <string>

using namespace std;

void presentaMenuGeneral();
int menu();
void crearRacional();
int escogerValor();
void createFile(string);
void add(string);

vector<Racional> listRacionales;
string fichero = "Racionales.txt";

int main() {
  createFile("Log de Racionales Perrones:");
  char resp = 's';
  cout << "Primero crearemos dos racionales" << endl;
  crearRacional();
  stringstream os1;
        os1 << "Nuevo racional creado: " << listRacionales[listRacionales.size()-1].getNumerador() <<
        "/" <<listRacionales[listRacionales.size()-1].getDenominador();
        add(os1.str());

  crearRacional();
  stringstream os2;
        os2 << "Nuevo racional creado: " << listRacionales[listRacionales.size()-1].getNumerador() <<
        "/" <<listRacionales[listRacionales.size()-1].getDenominador();
        add(os2.str());
  Racional racional1;
  Racional racional2;
  Racional racional3;
  int escogido1 = 0, escogido2 = 0;
  string log;
  do {
    int opcion = menu();
    if ((opcion != 9) && (opcion != 10)){
      cout << "Racional 1: " << endl;
      escogido1 = escogerValor();
      racional1 = listRacionales[escogido1];
      cout << "Racional 2: " << endl;
      escogido2 = escogerValor();
      racional2 = listRacionales[escogido2];

      cout << "Racional 1: " << racional1.getNumerador() << endl;
      cout << "Racional 2: " << racional2.getNumerador() << endl;
    }
    switch (opcion) {
    case 1:{
        racional3 = racional1 + racional2;
        listRacionales.push_back(racional3);


        stringstream os;
        os << racional3.getNumerador() << "/" << racional3.getDenominador()
          << " = " << racional1.getNumerador() << "/" << racional1.getDenominador()
          << " + " << racional2.getNumerador() << "/" << racional2.getDenominador();
        add(os.str());



        break;
      }
    case 2:{
      
      racional1 += racional2;
      racional1.reducir();
      listRacionales[escogido1] = racional1;


      stringstream os;
        os << racional1.getNumerador() << "/" << racional1.getDenominador()
          << " += " << racional2.getNumerador() << "/" << racional2.getDenominador();
        add(os.str());
      



       break;
      }
    case 3:{
       racional3 = racional1 - racional2;
       listRacionales.push_back(racional3);


        stringstream os;
        os << racional3.getNumerador() << "/" << racional3.getDenominador()
          << " = " << racional1.getNumerador() << "/" << racional1.getDenominador()
          << " - " << racional2.getNumerador() << "/" << racional2.getDenominador();
        add(os.str());

        break;
      }
    case 4:{
       racional1 -= racional2;
       racional1.reducir();
       listRacionales[escogido1] = racional1;


       stringstream os;
        os << racional1.getNumerador() << "/" << racional1.getDenominador()
          << " -= " << racional2.getNumerador() << "/" << racional2.getDenominador();
        add(os.str());

        break;
      }
    case 5:{
       racional3 = racional1 * racional2;
       listRacionales.push_back(racional3);


       stringstream os;
        os << racional3.getNumerador() << "/" << racional3.getDenominador()
          << " = " << racional1.getNumerador() << "/" << racional1.getDenominador()
          << " * " << racional2.getNumerador() << "/" << racional2.getDenominador();
        add(os.str());


        break;
      }
    case 6:{
       racional1 *= racional2;
       racional1.reducir();
       listRacionales[escogido1] = racional1;

       stringstream os;
        os << racional1.getNumerador() << "/" << racional1.getDenominador()
          << " *= " << racional2.getNumerador() << "/" << racional2.getDenominador();
        add(os.str());

        break;
      }
    case 7:{

        if(racional1.getNumerador() != 0 && racional1.getDenominador() != 0
          && racional2.getNumerador() != 0 && racional2.getDenominador() != 0){

            racional3 = racional1 / racional2;
            listRacionales.push_back(racional3);


            stringstream os;
            os << racional3.getNumerador() << "/" << racional3.getDenominador()
              << " = " << racional1.getNumerador() << "/" << racional1.getDenominador()
              << " / " << racional2.getNumerador() << "/" << racional2.getDenominador();
            add(os.str());
        }else{
          cout << "No se puede divir entre cero ¡Jamás!" << endl;
          add("Trató de dividir entre cero -> ¡Jamás!");
        }

        break;
      }
    case 8:{

        if(racional1.getNumerador() != 0 && racional1.getDenominador() != 0
           && racional2.getNumerador() != 0 && racional2.getDenominador() != 0){
            racional1 /= racional2;
            racional1.reducir();
            listRacionales[escogido1] = racional1;

            stringstream os;
            os << racional1.getNumerador() << "/" << racional1.getDenominador()
              << " /= " << racional2.getNumerador() << "/" << racional2.getDenominador();
            add(os.str());
        }else{
          cout << "No se puede divir entre cero ¡Jamás!" << endl;
          add("Trató de dividir entre cero -> ¡Jamás!");
        }
    
        break;
      }
    case 9:{
        crearRacional();
        stringstream os;
        os << "Nuevo racional creado: " << listRacionales[listRacionales.size()-1].getNumerador() <<
        "/" <<listRacionales[listRacionales.size()-1].getDenominador();
        add(os.str());

        break;
      }

    default:{
       cout << "¡Que tenga un buen día!" << endl;
        break;
      }
    }
    if (opcion != 10){
      cout << "¿Desea continuar? [S/sí -- N/no]" << endl;
      cin >> resp;  
    }else{
      resp = 'n';
    }
    
  } while (resp == 's' || resp == 'S');

  return 0;
}

int menu(){
  int opcion = 0;

  do{
      cout << "Menú" << endl;
      cout << "1.- Sumar (+)" << endl;
      cout << "2.- Asiganción (+=)" << endl;
      cout << "3.- Resta (-)" << endl;
      cout << "4.- Resta y Asiganción (-=)" << endl;
      cout << "5.- Multiplicación (*)" << endl;
      cout << "6.- Multiplicación y Asiganción (*=)" << endl;
      cout << "7.- División (/)" << endl;
      cout << "8.- División y Asiganción (/=)" << endl;
      cout << "9.- Crear un nuevo racinal" << endl;
      cout << "10.-Salir" << endl;
      cout << "Ingrese una opción: " << endl;
      cin >> opcion;
  }while(opcion < 1 || opcion >10 );
  return opcion;
}


void crearRacional(){
  int numerador, denominador = 0;
  cout << "Ingrese el numerador" << endl;
  cin >> numerador;
  do{
    cout << "Ingrese el denominador" << endl;
    cin >> denominador;
  }while(denominador == 0);
  Racional racional = Racional();

  listRacionales.push_back(Racional(numerador, denominador));

}

int escogerValor(){
  int limite = listRacionales.size() - 1;
  int valor = 0;
  do{
    cout << "Puede seleccionar un racional de 0 - " << limite << endl;
    cout << "Ingrese un número: " << endl;
    cin >> valor;
  }while(valor < 0 || valor > limite);
  return valor;
}

void createFile(string unString ){
    ofstream fileOut ( fichero.c_str());
    fileOut << unString << endl;
    fileOut.close();
}
 
void add(string unString ){
    fstream fileAdd;
    fileAdd.open( fichero.c_str(), ios::app);
    fileAdd << unString << endl;
    fileAdd.close();
}


