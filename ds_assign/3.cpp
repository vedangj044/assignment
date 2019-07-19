#include <iostream>
using namespace std;

void padd(int arr[], int arr1[]){
  int i = 0;
  int j = 0;
  int total = arr[0]+arr[0];
  int c[total*2+1];
  c[0] = total;
  int lead = 0;

  while(lead<=total*2+1){
    cout<<i<<" "<<j<<" "<<lead<<"\n";
    if(arr[i+1]==arr1[j+1]){
      c[lead+2]=arr[i+2]+arr1[j+2];
      c[lead+1]=arr[i+1];
      lead+=2;
      i+=2;
      j+=2;
    }
    else if(arr[i+1]<arr1[j+1]){
      c[lead+2]=arr[i+2];
      c[lead+1]=arr[i+1];
      lead+=2;
      i+=2;
    }
    else{
      c[lead+2]=arr1[j+2];
      c[lead+1]=arr1[j+1];
      lead+=2;
      j+=2;
    }
  }

  for(int i = 0; i < 7; i++){
    cout<<c[i]<<" ";
  }
}

int main(){
  //int number1, number2;
  //cin>>number1>>number2;
  //int arr[number1*2+1];
  int arr[] = {2, 0, 1, 100, 1};
  //int arr1[number2*2+1];
  int arr1[] = {2, 2, 4, 200, 2};
  padd(arr, arr1);
  return 0;
}
