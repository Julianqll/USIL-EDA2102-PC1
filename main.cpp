#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
    int *arreglo = new int[10];
    queue<int> queue;
    stack<int> stack;
    int aux,resto,numInv=0;
    for (int i = 0; i < 10; i++){
        cout << "Ingresa numeros ordenados: ";
        cin >> arreglo[i];
        aux = arreglo[i];
        while(aux>0){
            resto=aux%10;
            aux=aux/10;
            numInv=numInv*10+resto;
        }
        if(numInv==arreglo[i]){
            queue.push(arreglo[i]);
        } else {
            stack.push(arreglo[i]);
        }
    }
    
    cout << "Numeros capicua: " << endl;
    while (!queue.empty()) {
        cout << ' ' << queue.front();
        queue.pop();
    }
    cout << endl <<  "Numeros no capicua: " << endl;
    while (!stack.empty()) {
        cout << ' ' << stack.top();
        stack.pop();
    }
return 0;
}