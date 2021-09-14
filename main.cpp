// Pregunta 15(Práctica)

// Escriba un programa que lee una secuencia de caracteres y los imprima en orden reverso, usando un stack.//Jesus Gavancho EDA 7am-8.40 am
#include <iostream>
#include "type.h"
#include <stack>

using namespace std;

int main(){
T2 str="USIL SAN IGNACIO DE LOYOLA";
T2 aux_str="";
TX i=0;
stack<TX>stack;
for(TX i=str.size();i>=0;i--)
aux_str +=str[i];
stack.push(i++);//push the element 
//show the inverted text
cout<<"the normal text is : "<<str<<endl;
cout<<"the inverted text is : "<<aux_str<<endl;

  
}