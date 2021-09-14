#include <iostream>
#include <stack>
#include <string>
#include "type.h"
using namespace std;
 
void reverse(string &palab)
{

    stack<int> s;
 
  
    for (char t: palab) {
        s.push(t);
    }
 
    for (V1 x = 0; x < palab.length(); x++)
    {
        palab[x] = s.top();
        s.pop();
    }
}
 
int main()
{
    string palab = "AEIOU";
 
    reverse(palab);
    cout << palab;
 
    return 0;
}