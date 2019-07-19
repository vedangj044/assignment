// merge two sorted array
#include <iostream>
using namespace std;

int merge(int a[], int b[], int size_a, int size_b){
    int i = 0;
    int j = 0;

    int c[size_a+size_b];
    int lead = 0;

    while(i<size_a &&  j<size_b){
      if(a[i] < b[j]){
        c[lead] = a[i];
        i+=1;
        lead+=1;
      }
      else{
        c[lead] = b[j];
        j+=1;
        lead+=1;
      }
    }

    while(lead < size_a+size_b){
      if(i != size_a){
        c[lead] = a[i];
        i+=1;
        lead+=1;
      }
      else if(j != size_b){
        c[lead] = b[j];
        j+=1;
        lead+=1;
      }
    }

    for(int i=0; i<lead; i++){
      cout<<c[i]<<" ";
    }
    return 0;
}

int main(){
  int a[] = {4, 5, 6, 15, 116};
  int b[] = {1, 3, 9, 10};
  int size_a = sizeof(a)/sizeof(a[0]);
  int size_b = sizeof(b)/sizeof(b[0]);
  cout<<size_a<<" "<<size_b<<"\n";
  merge(a, b, size_a, size_b);
  return 0;
}
