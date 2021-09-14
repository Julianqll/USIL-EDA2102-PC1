#include <iostream>
using namespace std;
class Nodo{
	private:
		Nodo* siguiente;
		int elemento;
	public:
		Nodo(int e){
			elemento = e;
			siguiente = nullptr;
		}
		int getElemento(){
			return elemento;
		}
		Nodo* getSiguiente(){
			return siguiente;
		}
		void setSiguiente(Nodo*s){
			siguiente = s;
		}
};
class Lista{
	private:
		Nodo* inicio;
		size_t tamanio;
	public:
		Lista(){
			inicio = nullptr;
			tamanio = 0;
		}
		void insertar(int e);
		void promedio();
};
void Lista::insertar(int e){
	Nodo* nuevo = new Nodo(e);
	if (inicio == nullptr){
		inicio = nuevo;
		cout << inicio->getElemento() << " ";
	}else{
		Nodo* aux = inicio;
		while(aux->getSiguiente() != nullptr){
			aux = aux->getSiguiente();
		}
		aux->setSiguiente(nuevo);
		cout << aux->getSiguiente()->getElemento()<< " ";
		aux = nullptr;
	}
	tamanio++;
}
void Lista::promedio(){
	int suma = 0;
	Nodo* aux = inicio;
	while(aux != nullptr){
		suma = suma + aux->getElemento();
		aux = aux->getSiguiente();
	}
	cout << endl << "Promedio de los elementos de la lista: " << suma/tamanio;
	aux = nullptr;
}
int main(){
	cout << "Lista: " << endl;
	Lista* l = new Lista();
	for (int i = 1; i < 10; i++){
		l->insertar(i);
	}
	l->promedio();
	return 0;
}