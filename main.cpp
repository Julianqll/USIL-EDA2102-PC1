// Pregunta 17(Práctica)

// Escriba un programa que pueda leer un conjunto de 10 números enteros (ordenados) y luego guarde los números capicúa en un Queue y los que no en un Stack.//Jesus Gavancho EDA 7am-8.40 am
#include <iostream>
#include <queue>
#include <stack>
#include "type.h"
using namespace std;
 
int main()
{
  queue<TX> queue;
 stack<T1> stack;
  T1 *vect= new T1[10];  
T1 aux, rest,numPal=0;
 
  for(T1 i=0; i<10; i++)
  {
    cout<<"Enter Numbers: "<<endl;//user recieves this message (c output)
    cin>>vect[i];//so enter (c input)
    aux=vect[i];
    while(aux!=0){      
    rest=aux%10;
    aux=aux/10;
    numPal=numPal*10+rest;
    }    
      if(numPal==vect[i])
      queue.push(vect[i]);
      else
      stack.push(vect[i]);

       
    }
      cout<<" is capicua "<<endl;
      while (!queue.empty()) {
        cout << " " << queue.front();
        queue.pop();
      }
        
     cout<<endl;
      cout<<" is not capicua "<<endl;
      while (!stack.empty()) {
        cout << " " << stack.top();
        stack.pop();
    }
      }
     
