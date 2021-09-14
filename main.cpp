#include<iostream>
#include<stdlib.h>
using namespace :: std;

struct nodo{

  int dato;
  nodo *sig;

}*inicio,*fin;

void insertarNodo();
void mostrarLista();
void sumar();

int main() {
  insertarNodo();
  insertarNodo();
  insertarNodo();
  insertarNodo();

  mostrarLista();
  sumar();

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

void sumar(){
  float suma = 0;

  while(inicio != NULL){
    suma += inicio -> dato;  
    inicio = inicio->sig;
  }

cout<<"\n\nTotal: "<<suma<<endl;

}
