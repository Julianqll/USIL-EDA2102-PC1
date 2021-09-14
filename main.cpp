#include <iostream>
#include "type.h"
#include "linkedlist.h"
//by jose terrones
using namespace std;

const TX nElem = 10;
TX main()
{
  TX valores[nElem] = {20, 75, 25, 56, 34, 73, 27, 58, 20, 12};
  LinkedList<TX> Prueba;
  cout<< "Proceso de Insercion"<<endl;
  for(auto x=0; x<nElem; x++)
  {
      Prueba.insert_at_tail(valores[x]);
      Prueba.print(cout);
  }
  cout<<endl<< "Linked List"<<endl;
  Prueba.print(cout);
  cout<<endl<< "El Mayor Numero de la Lista"<<endl;
  Prueba.ElMayor();
} 

