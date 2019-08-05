#include <iostream>
#include "postfix.cpp"
#include <cstring>

using namespace std;

string infixPre(string exp){
  stack s;
  string out;

  for(int i=0; i<exp.length(); i++){
    s.push(exp[i]);
  }
  for(int j=0; j<exp.length(); j++){
    out+=s.pop();
  }
  cout<<out;
  return out;
}

int main(){
  string exp;
  cin>>exp;
  cout<<infixPre(convert(infixPre(exp)));
  return 0;
}
