#include <stack>
#include <iostream>
using namespace std;
int main()
{
    stack<int> stack;
		int numeroDecimal;
		cout << "Ingresa numero decimal: ";
		cin >> numeroDecimal;
    stack.push(numeroDecimal);
		string binario;
    while (stack.top() != 0){
        binario += (stack.top() % 2 == 0 ? "0" : "1" );
        stack.top() /= 2;
    }
    cout << endl <<  "Numero Decimal convertido A Binario mostrado: " << binario;
return 0;
}