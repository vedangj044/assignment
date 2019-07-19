//array implementation of stack
#include <iostream>
using namespace std;

class stack{
  public:
    int arr[100];
    int top = -1;

    void push(int x){
      top+=1;
      arr[top]=x;
    }

    void pop(){
      top-=1;
    }

    int topel(){
      cout<<arr[top]<<"\n";
      return arr[top];
    }

    bool isempty(){
      if(top==-1){
        return true;
      }
      else{
        return false;
      }
    }

    void print(){
      for(int i=0; i<=top; i++){
        cout<<arr[i]<<" ";
      }
      cout<<"\n";
    }
};
