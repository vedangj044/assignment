#include <iostream>
#include "stack3.cpp"
using namespace std;

int main(){
  stack s;
  s.push(5);
  s.push(6);
  s.print();
  s.pop();
  s.print();
  return 0;
}
