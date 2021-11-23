#include <iostream>
#include "linkedlist.h"
#include "queue.h"
#include "type.h"
#include "stack.h"
using namespace std;

const int cantidad=10;
const int numero=5;

int main() {
  TX vector[10]={1,2,3,4,5,6,7,8,9,10};
  LinkedList<TX> mylist;
  Stack<TX> stack;
  Stack<TX> *pStack = new Stack<TX>;
  int par=1,impar=1,i=1,j=1;
  while(i<=10){
    if(i%2==0){
    }
    i++;
  }
  cout<<"STACK "<<endl;
   while(j<=10){
     
    if(j%2==1){
    for( auto j = 1 ; j < 10 ; j++ )
     stack.push(j+j);
     
     cout <<j<<  endl;
    }
    j++;
  }
  for(auto i=2; i<=10; i++)
  {   mylist.insert_at_tail(i++);
      cout<<endl;
      mylist.print(cout);
  }
  
  /*for( i = 1 ; i<= 10 ; i++ )
  {
    auto y = stack.pop();
    cout << y << endl;
  }*/
}