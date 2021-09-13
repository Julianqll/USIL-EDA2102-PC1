#include <iostream>
#include "type.h"
#include "stack.h"
#include "queue.h"
#include "linkedlist.h"
#include "operators.h"

using namespace std;

const int nElem = 10;
T2 resto,num,numInv=0;
int main() {
  TX vect[nElem] = {5,12,11,22, 7,80, 90, 3,25, 55};

  Queue<TX> queue;
  Stack<TX> stack;
  for(auto x=0; x<nElem; x++)
  {
    resto=vect[x]%10;
    num=vect[x]/10;
    numInv=numInv*10+resto;  
    if(vect[x]==numInv){
      queue.insert(vect[x]);
      cout << queue <<" este es capicua "<< endl;
      }else{
      stack.push(vect[x]);
      auto y = stack.pop();
      cout << y << " este no es capicua "<<endl;
      }
  }

}