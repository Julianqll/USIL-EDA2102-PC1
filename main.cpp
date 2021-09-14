#include <iostream>
#include "linkedlist.h"
#include "type.h"

using namespace std;
const int nElem=5;
int main() {
  TX mayorNumero=0;
  TX vect[nElem]={1,2,8,4,5};
  LinkedList<TX> mylist;
  for(auto x=0; x<nElem; x++)
  { 
    if(vect[x]>mayorNumero){
      mayorNumero=vect[x];
    }  
    mylist.insert_at_tail(vect[x]);
  }

 cout<< "" <<endl;
 cout<<"El mayor numero es "<<mayorNumero<<endl; 
}
