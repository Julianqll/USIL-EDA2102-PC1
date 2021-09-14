#include <iostream>
#include "linkedlist.h"
#include "type.h"
#include "stack.h"
using namespace std;
int main()

{
  TS cadena="miguel";
  TS aux_cadena = "";
  Stack<TX> stack;
  Stack<TX> *pStack = new Stack<TX>;
  TX i=0;

  for(int i=cadena.size();i>0;i--)
  aux_cadena += cadena[i];
  stack.push(i+i);
  cout <<aux_cadena<<endl;
    /*string cadena = "miguel";
    string aux_cadena = "";
 
    for (int i = cadena.size(); i >=0 ; i--)
         aux_cadena += cadena[i];


    cout<<"El texto normal es: "<<cadena<<endl;
    cout<<"El texto invertido es: "<<aux_cadena<<endl;
    return 0;*/
}