#include <iostream>
using namespace std;

class stack{
  public:
    int arr[10][2];
    int top;

    stack(){
      top = -1;
    }

    void push(int x, int y){
      if(top<10){
        top+=1;
        arr[top][0] = x;
        arr[top][1] = y;
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

    int topelX(){
      return arr[top][0];
    }

    int topelY(){
      return arr[top][1];
    }

    bool isEmpty(){
      if(top==-1){
        return true;
      }
      return false;
    }

    bool find(int x, int y){
      for(int i=0; i<=top; i++){
        if(x==arr[i][0] && y==arr[i][1]){
          return true;
        }
      }
      return false;
    }

    void print(){
      for(int i=0; i<=top; i++){
        cout<<arr[i][0]<<" "<<arr[i][1]<<"\n";
      }
      cout<<"\n";
    }
};
