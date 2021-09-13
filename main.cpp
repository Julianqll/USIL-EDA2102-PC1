// Pregunta 19(Práctica)


// Usando la lista enlazada creada anteriormente, almacene solo números enteros en la misma e implemente un método que permita calcular el menor elemento.//Jesus Gavancho EDA 7am-8.40 am
#include <iostream>
#include "type.h"
#include "linkedlist.h"

using namespace std;

const int nElem = 10;//can change it to more or less in order to optimize

TX MayorElement=9999;//setting this value to see the least number(element), also can change it depends on the vector

int main()
{
  TX vect[nElem] = {10,20,5,2,1,8,98,212,8,10};
  cout<<"Elements:"<<endl;
  LinkedList<TX> mylist;
  for(auto x=0; x<nElem; x++)
  {
    if(vect[x]<MayorElement)//here contrary 
    MayorElement=vect[x];
    mylist.insert_at_tail(vect[x]);
    mylist.print(cout);
  }
  cout<<endl;
  cout<<"The least number in the linkedlist is: "<<MayorElement;
  cout<<endl;//mostrando el menor elemento de la lista enlazada

 
}