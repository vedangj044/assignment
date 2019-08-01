#include <iostream>
using namespace std;

class stack{
  public:
    int arr[10];
    int top;

    stack(){
      top = -1;
    }

    void push(int x){
      if(top<10){
        top+=1;
        arr[top] = x;
      }
      else{
        cout<<"Stack is full\n";
      }
    }

    void pop(){
      if(isEmpty()){
        cout<<"Stack is Empty\n";
      }
      top-=1;
    }

    int topel(){
      cout<<arr[top];
      return arr[top];
    }

    bool isEmpty(){
      if(top==-1){
        return true;
      }
      return false;
    }

    void print(){
      for(int i=0; i<=top; i++){
        cout<<arr[i]<<" ";
      }
      cout<<"\n";
    }
};

int main(){
  stack s;
  s.push(10);
  s.push(20);
  s.print();
  s.pop();
  s.print();
  s.isEmpty();
  s.pop();
  s.isEmpty();
  return 0;
}
