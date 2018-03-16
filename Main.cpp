#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "Racional.h"
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

void presentaMenuGeneral();
int menu();
void crearRacional();
int escogerValor();
void createFile(string);
void add(string);

//vector<Racional*> listRacionales;
vector<Racional> listRacionales;
string fichero = "Racionales.txt";

int main() {
  char resp = 's';
  cout << "Primero crearemos dos racionales" << endl;
  crearRacional();
  crearRacional();
  Racional racional1;
  Racional racional2;
  createFile("Log de Racionales Perrones:");
  do {
    int opcion = menu();
    if ((opcion != 9) && (opcion != 10)){
      cout << "Racional 1: " << endl;
      racional1 = listRacionales[escogerValor()];
      cout << "Racional 2: " << endl;
      racional2 = listRacionales[escogerValor()];

      cout << "Racional 1: " << racional1.getNumerador() << endl;
      cout << "Racional 2: " << racional2.getNumerador() << endl;
    }
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

/*void guardarArchivo(){
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


}*/


/*void modificarArchivo(){
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
}*/

void crearRacional(){
  int numerador, denominador;
  cout << "Ingrese el numerador" << endl;
  cin >> numerador;
  cout << "Ingrese el denominador" << endl;
  cin >> denominador;
  Racional racional = Racional();
  //Racional* racional = new Racional(numerador, denominador);
  //cout << "Esto es una prueba " << racional->getNumerador() << endl;
  //cout << "Cantidad de racionales" << listRacionales.size();
  //listRacionales.push_back(racional);
  listRacionales.push_back(Racional(numerador, denominador));
  //cout << "Cantidad de racionales" << listRacionales.size();
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
