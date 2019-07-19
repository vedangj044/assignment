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

int main(){
  int arr1[5] = {1, 2, 3 , 5, 7};
  int x;
  cin>>x;
  int y = binarySearch(arr1, 0, 4, x);
  cout<<y<<"\n";
  return 0;
}
