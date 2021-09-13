//Pregunta 16(Práctica)

// Escriba un programa que pueda leer un conjunto de 10 números enteros (ordenados) y luego guarde los números pares en un Queue y los impares en un Stack. //Jesus Gavancho EDA 7am-8.40 am

#include <iostream> //std::cout
#include <queue>    //std::queue using Standard Template Library (STL)
#include <stack>   //std::stack  using Standard Template Library (STL)
#include "type.h"

using namespace std; //instead of used std:: in i/o
int main(){
    queue<T1> queue;
    stack<T1>stack;
    T1 *vector= new T1[10];
    for(T1 i=0;i<10;i++){
        cout<<"Please enter numbers: "<<endl;//user recieves this message (c output)
        cin>>vector[i];//so enter (c input)
        if(vector[i]%2==0)
          queue.push(vector[i]);//comparing elements from the vector in order to push if is even or odd and then push it respectively to a queue or stack
        else
        stack.push(vector[i]);
    }
    //Show the elements
      cout<<" Even numbers are queued: "<<endl;//pares
    while(!queue.empty()){//comparing if is true
      cout<<" "<<queue.front();
      queue.pop();//FIFO
    }
    cout<<endl;
    cout<<" Odd numbers are stacked: "<<endl;//impares
    while(!stack.empty()){
      cout<<" "<<stack.top();
      stack.pop();//LIFO
    }
   cout<<endl;

};