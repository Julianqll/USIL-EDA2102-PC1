#include <iostream>
#include "type.h"
#include "stack.h"
#include "queue.h"
#include "linkedlist.h"
#include "operators.h"

using namespace std;

const int nElem = 10;

int main() {
  TX vect[nElem] = {12,11,22, 7,80, 90, 3,25, 55,47};

  Queue<TX> queue;
  Stack<TX> stack;
  for(auto x=0; x<nElem; x++)
  {
    if( vect[x] % 2==0){
      queue.insert(vect[x]);
      cout << queue <<" esto es la cola "<< endl;
    }
    else{
      stack.push(vect[x]);
      auto y = stack.pop();
      cout << y << " esto es la pila "<<endl;
    }
  }
}