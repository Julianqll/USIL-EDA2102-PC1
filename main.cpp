#include<iostream>
#include<stdlib.h>
using namespace :: std;

struct nodo{

  int dato;
  nodo *sig;

}*inicio,*fin;

void insertarNodo();
void mostrarLista();
void Promedio();

int main() {
  insertarNodo();
  insertarNodo();
  insertarNodo();
  insertarNodo();

  mostrarLista();
  Promedio();

  return 0;
}

void insertarNodo(){
  nodo* nuevo = new nodo();
  cout<<"Ingresar dato de nuevo nodo: ";
  cin>>nuevo->dato;

  if(inicio == NULL){
    inicio = nuevo;
    inicio -> sig = NULL;
    fin = nuevo;
  }
  else{
    fin->sig = nuevo;
    nuevo->sig = NULL;
    fin = nuevo;

  }

}

void mostrarLista(){
  nodo* lista = new nodo();
  lista = inicio;
  if(inicio != NULL){
    while(lista!=NULL){

    cout<< " " <<lista->dato<<endl;
    lista = lista->sig;
    }

  }
  
}

void Promedio(){
  float total = 0, promedio = 0;
  int contador = 0;

  while(inicio != NULL){
    total += inicio -> dato; 
    contador++; 
    inicio = inicio->sig;
  }

  promedio = total/contador;

cout<<"Promedio: "<<promedio<<endl;

}
