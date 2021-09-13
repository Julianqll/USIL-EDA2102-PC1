#include <iostream>
using namespace std;

struct nodo{

  int numero;
  nodo *sig;

} *inicio;

int main () {

  nodo *uno = new nodo;
  nodo *cuatro = new nodo;
  nodo *dos = new nodo;
  nodo *ocho = new nodo;

  inicio = uno;

  uno -> sig = cuatro;
  cuatro -> sig = dos;
  dos -> sig = ocho;
  ocho -> sig = NULL;

  uno -> numero = 1;
  cuatro -> numero = 4;
  dos -> numero = 2;
  ocho -> numero = 8;

  cout<<inicio->numero<<inicio->sig->numero<<inicio->sig->sig->numero<<inicio->sig->sig->sig->numero<<endl;