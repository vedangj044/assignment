#include <iostream>
using namespace std;

class queue{
  public:
    int arr[5];
    int front=0;
    int rear=-1;

    void enqueue(int x){
      rear+=1;
      arr[rear]=x;
    }

    void dequeue(){
      front+=1;
      if(front>rear){
        cout<<"reset"<<"\n";
        front=0;
        rear=-1;
      }
    }

    void print(){
      for(int i=front; i<=rear; i++){
        cout<<arr[i]<<" ";
      }
      cout<<"\n";
    }
};

int main(){
  queue q;
  q.enqueue(1);
  q.print();
  q.enqueue(1);
  q.print();
  q.enqueue(1);
  q.print();
  q.enqueue(1);
  q.print();
  q.enqueue(1);
  q.print();
  q.dequeue();
  q.print();
  q.dequeue();
  q.print();
  q.dequeue();
  q.print();
  q.dequeue();
  q.print();
  q.dequeue();
  q.print();
  q.enqueue(1);
  q.print();
  return 0;
}
