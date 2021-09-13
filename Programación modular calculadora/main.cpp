#include <iostream>
#include <iomanip>
using namespace std;

//Biblioteca 
#include "calculos.h"

//Funciones
int menu();

int main() {
  int op=0;
  double resultado=0;
  
  do{
    op=menu();
    switch (op){
      case 1:
      cout<<setw(45)<<" S U M A"<<endl;
      resultado=suma();
      cout<<"El resultado de la suma es: "<<resultado<<endl;
      cout<<endl;
      break;
      case 2:
      cout<<setw(45)<<" R E S T A"<<endl;
      resultado=resta();
      cout<<"El resultado de la resta es: "<<resultado<<endl;
      cout<<endl;
      break;
      case 3:
      cout<<setw(45)<<" M U L T I P L I C A C I Ó N"<<endl;
      resultado=multiplicacion();
      cout<<"El resultado de la multiplicación es: "<<resultado<<endl;
      cout<<endl;
      break;
      case 4:
      cout<<setw(45)<<" D I V I S I Ó N"<<endl;
      resultado=division();
      cout<<"El resultado de la división es: "<<resultado<<endl;
      cout<<endl;
      break;
      case 5:
      cout<<setw(45)<<" P O T E N C I A C I Ó N"<<endl;
      resultado=potencia();
      cout<<"El resultado de la potenciación es: "<<resultado<<endl;
      cout<<endl;
      break;
      case 6:
      cout<<setw(45)<<" R A Í Z  C U A D R A D A"<<endl;
      resultado=raiz();
      cout<<"El resultado de la raiz cuadrada es: "<<resultado<<endl;
      cout<<endl;
      break;
      
      case 7:
      cout<<setw(45)<<" F A C T O R I A L"<<endl;
      resultado=factorial();
      cout<<"El factorial es: "<<resultado<<endl;
      cout<<endl;
      break;
    }
  }
  while (op!=8);
  return 0;
}

//Función para el menú
int menu()
{
  int opcion=0;
  do 
  {
    cout<<setw(55)<<"M E N Ú  C A L C U L A D O R A "<<endl;
    cout<<"1. Suma"<<endl;
    cout<<"2. Resta"<<endl;
    cout<<"3. Multiplicación"<<endl;
    cout<<"4. División"<<endl;
    cout<<"5. Potenciación"<<endl;
    cout<<"6. Raíz Cuadrada"<<endl;
    cout<<"7. Factorial"<<endl;
    cout<<"8. Salir"<<endl;
    cout<<"Ingrese la opción que desea ejecutar: "<<endl;
    cin>>opcion;
  }
  while ((opcion<=0) || (opcion>8));
  return opcion;
}