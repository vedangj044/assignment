#include <iostream>
using namespace std;

int binarySearch(int y[], int l, int r, int x){
  if(r>=l){
    int middle = l + (r-l)/2;
    if(y[middle]==x){
      return middle;
    }
    else if(y[middle] > x){
      return binarySearch(y, l, middle-1, x);
    }
    else{
      return binarySearch(y, middle+1, r, x);
    }
  }
  return -1;
}

class arr{
  public:
    int lead;
    int arr1[10];
    bool sorted;

    arr(){
      lead = 0;
      sorted = true;
    }

    void insert(int x){
      if(lead < sizeof(arr1)/sizeof(arr1[0])){
        arr1[lead] = x;
        if(arr1[lead]<arr1[lead-1]){
          sorted = false;
        }
        lead+=1;
      }
      else{
        cout<<"Array is full";
      }
    }

    void delet(){
      // not from some index but from the last
      lead-=1;
    }

    void traverseF(){
      for(int i = 0; i <= lead-1; i++){
        cout<<arr1[i]<<"\n";
      }
    }

    void traverseB(){
      cout<<lead;
      for(int j = lead-1; j >= 0; j--){
        cout<<arr1[j]<<"\n";
      }
    }

    int search(int x){
      if(sorted==true){
        int k = binarySearch(arr1, 0, lead, x);
        cout<<k<<"\n";
      }
      else{
        for(int i = 0; i <= lead; i++){
          if(arr1[i]==x){
            cout<<"Element found";
            return 0;
          }
        }
        cout<<"Element not found";
        return 0;
      }
    }
};

int main(){
  arr arr1;
  arr1.insert(5);
  arr1.insert(6);
  arr1.insert(78);
  arr1.insert(77);
  arr1.insert(45);
  arr1.delet();
  arr1.traverseB();
  arr1.traverseF();
  arr1.search(5);
  return 0;
}
