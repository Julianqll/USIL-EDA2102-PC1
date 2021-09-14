#include <iostream>
#include <queue>
#include <stack>
using namespace std;
//by jose terrones

using TX=int;

TX main(){
  queue<TX> queue_prueba;
  stack<TX> stack_prueba;
  TX lista[10]={1,2,3,4,5,6,7,8,9,10};
  for (TX i=0; i<10; i++){
    if (lista[i]%2==0)   {    queue_prueba.push(lista[i]); }

    else                 {    stack_prueba.push(lista[i]);  }
    }

    cout<< "queue"<< endl;
    while (!queue_prueba.empty()) {
      cout << " " << queue_prueba.front();
      queue_prueba.pop();
    }

    cout<<endl<< "stack"<< endl;
    while (!stack_prueba.empty()) {
      cout << " " << stack_prueba.top();
      stack_prueba.pop();
    }
}
