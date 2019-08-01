#include <iostream>
#include <cstring>
#include <cmath>
#include "stack.cpp"
using namespace std;

void evalute(string exp){
  stack s;

  for(int i=0; i<exp.length(); i++){
    if(exp[i]=='+'){
      int c = (int)(s.pop()-'0')+(int)(s.pop()-'0');
      s.push(c+'0');
    }
    else if(exp[i]=='-'){
      int b = s.pop() - '0';
      int a = s.pop() - '0';
      s.push(a-b+'0');
    }
    else if(exp[i]=='*'){
      int b = s.pop() - '0';
      int a = s.pop() - '0';
      s.push(a*b+'0');
    }
    else if(exp[i]=='/'){
      int b = s.pop() - '0';
      int a = s.pop() - '0';
      s.push(a/b+'0');
    }
    else if(exp[i]=='#'){
      int b = s.pop() - '0';
      int a = s.pop() - '0';
      s.push(pow(a, b)+'0');
    }
    else{
      s.push(exp[i]);
    }
  }
  cout<<s.pop()-'0';
}

int main(){
  string exp;
  cin>>exp;
  evalute(exp);
  return 0;
}
