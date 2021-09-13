#include<iostream>
#include<stdlib.h>
using namespace :: std;

struct nodo{

  int dato;
  nodo *sig;
}*inicio,*fin;

void insertarNodo();
void mostrarLista();
void calcularMenor();

int main() {
  insertarNodo();
  insertarNodo();
  insertarNodo();
  insertarNodo();

  mostrarLista();
  calcularMenor();

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

void calcularMenor(){
  int menor=10;

  while(nodo*lista = NULL){
    
 
    if((lista->dato)<menor){
      menor = lista->dato;
    }
    lista = lista->sig;
  } 
cout<<"El menor dato es: " <<menor<<endl;

}