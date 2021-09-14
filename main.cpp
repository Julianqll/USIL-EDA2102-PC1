#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
    int *arreglo = new int[10];
    queue<int> queue;
    stack<int> stack;
    for (int i = 0; i < 10; i++){
        cout << "Ingresa numeros : ";
        cin >> arreglo[i];
        if (arreglo[i] % 2 == 0){
            queue.push(arreglo[i]);
        } else {
            stack.push(arreglo[i]);
        }
    }
    
    cout << "Numeros pares: " << endl;
    while (!queue.empty()) {
        cout << ' ' << queue.front();
        queue.pop();
    }
    cout << endl <<  "Numeros impares: " << endl;
    while (!stack.empty()) {
        cout << ' ' << stack.top();
        stack.pop();
    }
return 0;
}