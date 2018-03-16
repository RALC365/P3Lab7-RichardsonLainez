#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "Racional.h"
#include <vector>
using namespace std;

void presentaMenuGeneral();

int menu();

void crearRacional();

vector<Racional> listRacionales;



int main() {

  char resp = 's';
  cout << "Primero crearemos dos racionales" << endl;
  crearRacional();
  crearRacional();
  do {
    int opcion = menu();
    switch (opcion) {
    case 1:{
        

        break;
      }
    case 2:{
       


       break;
      }
    case 3:{
       


        break;
      }
    case 4:{
       


        break;
      }
    case 5:{
       


        break;
      }
    case 6:{
       


        break;
      }
    case 7:{
       


        break;
      }
    case 8:{
       


        break;
      }
    case 9:{
        crearRacional();
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
      resp = 's';
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

void guardarArchivo(){
   string contenido;
  string contenido2= "Racionales";
  //cout << "Ingresa el nombre del archivo a crear(sin el .txt): ";
  //cin.ignore();
  //getline(cin, contenido2);
  //cout << "Ingresa el contenido del archivo: ";
  //getline(cin, contenido);
  contenido2 += ".txt";
  ofstream fs(contenido2.c_str());
  //fs << contenido << endl;
  fs.close();
  //cout << "El archivo ha sido creado correctamente" << endl;
  //system("pause");


}


void modificarArchivo(){
   string contenido;
  string contenido2;
  cout << "Ingresa el nombre del archivo que quieres modificar(sin el .txt): ";
  cin.ignore();
  getline(cin, contenido2);
  contenido2 += ".txt";
  cout << "Ingresa el NUEVO contenido del archivo: ";
  getline(cin, contenido);
  ofstream fs(contenido2.c_str(), ios::out);
  fs << contenido << endl;
  fs.close();
  cout << "El archivo ha sido modificado correctamente" << endl;
  system("pause");
}

void crearRacional(){
  int numerador, denominador;
  cout << "Ingrese el numerador" << endl;
  cin >> numerador;
  cout << "Ingrese el denominador" << endl;
  cin >> denominador;
  Racional* racional = new Racional(numerador, denominador);

  listRacionales.push_back(racional);
}

