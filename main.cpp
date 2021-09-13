//   Pregunta 12 (Práctica)

// Diseñe una lista enlazada simple (con la clase Nodo que almacene un valor y un puntero “hacia al siguiente nodo”)
#include <iostream>
#include "type.h"
#include "linkedlist.h"

using namespace std;

const int nElem = 10;//can change it to more or less in order to optimize

int main()
{
  TX vect[nElem] = {10,20,5,2,1,8,98,21,8,10};
  cout<<"Elements:"<<endl;
  LinkedList<TX> mylist;
  for(auto x=0; x<nElem; x++)
  {
    mylist.insert_at_tail(vect[x]);
    mylist.print(cout);
  }
  
  cout<<endl;

  for(auto x=0; x<nElem; x++)
  {
    TX dato = mylist.PopHead();
    cout <<"element removed:  " << dato <<endl;
    mylist.print(cout);
  }
}