#include <iostream>
#include <stack>
using namespace std;
//by jose terrones
using TX=int;

TX main(){
  stack<TX> stack_prueba;
  TX Numero = 50;
  TX Residuo;
  for (TX i=0; Numero!=0; i++){
    Residuo = Numero%2;
    Numero = Numero/2;
    stack_prueba.push(Residuo);
    }

    cout<<endl<< "stack"<< endl;
    while (!stack_prueba.empty()) {
      cout << " " << stack_prueba.top();
      stack_prueba.pop();
    }
}
