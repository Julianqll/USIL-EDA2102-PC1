#include <iostream>
#include "Linkedlist.h"
#include "operators.h"

using namespace std;

const int nElem = 20;
using TX=long;
int main()
{
  TX vect[nElem] = {5,30,40, 7,80, 90, 1324,25, 54,47, 
                  76, 6, 12, 8, 70, 27, 19, 83, 9, 1};
  LinkedList<TX> mylist;
  
  for(auto x=0; x<20; x++)
  {   mylist.insert_at_tail(vect[x]);
      cout << mylist << endl;
  }
  
  auto Menor = mylist[0];
  for(auto y=0; y<20; y++){
    if (mylist[y] < Menor)
      Menor = mylist[y];
    }
  cout << "El menor valor de la lista es: " << Menor <<endl;
}