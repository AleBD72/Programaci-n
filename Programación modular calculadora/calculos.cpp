//Implementación de las funciones
#include <iostream>
#include <cmath>
using namespace std;
#include "calculos.h"

int MAX=10;
//Suma
double suma()
{
  double suma[MAX];
  double sum=0;
  int n=0;
  do{
    cout<<"Ingrese la cantidad de números que desea sumar (2-10):"<<endl;
    cin>>n;
  }
  while ((n<2)||(n>10));
  cout<<"Ingrese los números que desea sumar separados por un espacio:"<<endl;
  for (int i=0; i<n;i++){
    cin>>suma[i];
  }
  for (int x=0; x<n; x++){
    sum=sum+suma[x];
  }
  return sum;
}

//Resta
double resta()
{
  double resta[MAX];
  double res=0;
  int n=0;
  do{
    cout<<"Ingrese la cantidad de números que desea restar (2-10):"<<endl;
    cin>>n;
  }
  while ((n<2)||(n>10));
  cout<<"Ingrese los números que desea restar separados por un espacio:"<<endl;
  for (int i=0; i<n;i++){
    cin>>resta[i];
  }
  for (int x=0; x<n; x++){
    res=res-resta[x];
  }
  return res;
}

//Multiplicación
double multiplicacion()
{
  double mult[MAX];
  double mul=1;
  int n=0;
  do{
    cout<<"Ingrese la cantidad de números que desea multiplicar (2-10):"<<endl;
    cin>>n;
  }
  while ((n<2)||(n>10));
  cout<<"Ingrese los números que desea multiplicar separados por un espacio:"<<endl;
  for (int i=0; i<n;i++){
    cin>>mult[i];
  }
  for (int x=0; x<n; x++){
    mul=mul*mult[x];
  }
  return mul;
}

//División
double division ()
{
  double num=0, denom=0;
  double div=0;
  cout<<"Ingrese el númerador: ";
  cin>>num;
  cout<<"Ingrese el denominador: ";
  cin>>denom;
  if (denom==0){
    cout<<"El denominador no puede ser 0"<<endl;
  }
  else{
    div=num/denom;
  }
  return div;
}

//Potenciación
double potencia()
{
  double base=0;
  int exponente=0;
  double resultado=0;
  cout<<"Ingrese la base de la potencia"<<endl;
  cin>>base;
  cout<<"Ingrese el exponente: "<<endl;
  cin>> exponente;

  resultado= pow(base, exponente);

  return resultado;
}

//Raíz cuadrada
double raiz()
{
  double num=0;
  double raizc=0;
  cout<<"Ingrese el número del que desea conocer la raíz cuadrada:"<<endl;
  cin>>num;
  if (num<0){
    cout<<"Solo existe raíz cuadrada de números mayores o iguales a 0"<<endl;
  }
  else{
    raizc=sqrt(num);
  }
  
  return raizc;
}

//Factorial
int factorial()
{
  int fact=1;
  int n=0;
  cout<<"Ingrese el número del que desea conocer el factorial: "<<endl;
  cin>>n;
  if (n==0){
    fact=1;
  }
  else{
    for(int i=1; i<=n;i++){
      fact=fact*i;
    }
  }
  return fact;
}