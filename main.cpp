#include <iostream>
#include "Linkedlist.h"
#include "operators.h"

using namespace std;

const int nElem = 20;
using TX=long;
int main()
{
  TX vect[nElem] = {5,30,40, 7,80, 90, 124,25, 54,47, 
                  76, 6, 12, 8, 70, 27, 19, 83, 9, 4};
  LinkedList<TX> mylist;
  
  for(auto x=0; x<20; x++)
  {  
     mylist.insert_at_tail(vect[x]);
  }

  auto num_mayor = mylist[0];

  for(auto y=0; y<20; y++){

      if (mylist[y] > num_mayor){

        num_mayor = mylist[y];
        
      }
            
  }
  cout << "el menor elemento: " << num_mayor <<endl;
}
  