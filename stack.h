#ifndef __STACK_H__
#define __STACK_H__
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack
{
private:

    int m_top;
    vector<T> m_vect;

public:
    Stack();
    void push(T n);
    
    T pop( T numeroDecimal );
};
template <typename T>
Stack<T>::Stack()
{
    m_top = 0;
}
template <typename T>
void Stack<T>::push(T n)
{
    
    m_vect[m_top++]=n;
    
}

template <typename T>
     T Stack<T>::pop( T numeroDecimal )
{
    int rem, i = 1, numeroOctal = 0;
 
    while( numeroDecimal != 0 ) {
        rem = numeroDecimal % 8;
        numeroDecimal /= 8;
        numeroOctal += rem * i;
        i *= 10;
    }
 
    return numeroOctal;
}    
#endif
