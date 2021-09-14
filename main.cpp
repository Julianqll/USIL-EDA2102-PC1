#include <iostream>
using namespace std;

struct Node{
  int dato;
  Node *next;
};

void insertList(Node *&, int);

int main(){
  Node *list = NULL;
  int dato;
  cout<<"Dato a insertar: ";
  cin>>dato;
  insertList(list,dato);
  return 0;

}

void insertList (Node *&list, int n){
  Node *new_node = new Node();
  new_node -> dato = n;

  Node *aux1 = list;
  Node *aux2;

  while((aux1 != NULL) && (aux1->dato <n)){
      aux2 = aux1;
      aux1 = aux1->next;
  }
  if(list == aux1){
    list = new_node;
  }
  new_node -> next = aux1;
}