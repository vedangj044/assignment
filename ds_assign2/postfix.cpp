#include <iostream>
#include <cstring>
#include "stack.cpp"
using namespace std;

string convert(string exp){
  stack s;
  string out;

  for(int i =0; i<exp.length(); i++){
    if(exp[i]=='+' || exp[i]=='-'){
      if(s.topel()=='*' || s.topel()=='/' || s.topel()=='#'){
        while(!s.isEmpty()){
          out+=s.pop();
        }
      }
      s.push(exp[i]);
    }
    else if(exp[i]=='*' || exp[i]=='/'){
      if(s.topel()=='#'){
        while(!s.isEmpty()){
          out+=s.pop();
        }
      }
      s.push(exp[i]);
    }
    else if(exp[i]=='#'){
      s.push(exp[i]);
    }
    else{
      out+=exp[i];
    }
  }
  while(!s.isEmpty()){
    out+=s.pop();
  }
  cout<<out;
  return out;
}
