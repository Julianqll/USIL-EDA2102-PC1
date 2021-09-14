#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__ 

using namespace std;

template <typename T>
class Octal
{
  private:
    T   n1=20;
  public:
    T   ConvertO(T n1);
    void Push(T Toctal);
}

template <typename T>
T ConvertO(T n1)
{
  int res, i = 1, Toctal = 0;

  while (n1 != 0) {
    res = n1 % 8;
    n1 = /= 8;
    Toctal += res * i;
    i *= 10;
  }
  return TOctal;
}
template <typename T>
void Push(Node *&Stack, T Toctal){
  Node *new_node = new Node();
  new_node ->data = EO;
  new_node ->next = Stack;
  Stack = new_node;
}

#endif