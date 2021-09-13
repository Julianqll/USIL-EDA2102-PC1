#include <iostream>
#include "type.h"
#include "linkedlist.h"

using namespace std;
//Si queremos reducir el tamaño de la lista, solo hay que cambiar el nElem y podemos hacerlo más optimizado. 
const int nElem = 10;
int mayor=0;
int main()
{
  TX vect[nElem] = {5,30,40, 7,80, 90, 3,25, 54,47};
  LinkedList<TX> mylist;
  for(auto x=0; x<nElem; x++)
  {
    if(vect[x] > mayor){
      mayor = vect[x];
      mylist.insert_at_tail(vect[x]);
      mylist.print(cout);
    }
  }
  cout<<"El mayor numero de la lista enlazada es: "<<mayor;
  cout << endl;
}