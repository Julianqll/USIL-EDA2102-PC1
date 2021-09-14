#include <iostream>
#include <stack>
using namespace std;

template <typename T>
void insertAtBottom(stack<T>&st, T elem){

  if (st.empty()){
    st.push(elem);
    return;
  }


  T topElem=st.top();
  st.pop();
  insertAtBottom(st, elem);

  st.push(topElem);
}


template <typename T>
void reverse (stack<T> &st){
  if (st.empty()){
    return;
  }

  T elem=st.top();
  st.pop();
  reverse(st);
  insertAtBottom(st,elem);
}

int main(){
  stack<int>st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);


  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
  cout<<endl;
}