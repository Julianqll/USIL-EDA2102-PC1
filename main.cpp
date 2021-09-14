#include <iostream>
#include "linkedlist.h"
#include "type.h"
using namespace std;

const V1 n = 5;

int main()
{
  V1 vect[n] = {6,8,2,4,9};
  V1 suma = 0;
  LinkedList<V1> list;
  
  for(V1 i=0; i < n; i++)
  { 
  list.insert_at_tail(vect[i]);
  list.print(cout);
  
  }
  
  for(V1 i=0; i <n; i++){
    suma=suma+vect[i];
    list.insert_at_tail(vect[i]);
   
  }
cout<<"= "<<suma<<endl;
}