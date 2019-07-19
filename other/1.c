#include <stdio.h>

int check(int a, int b){
  int x = 0,k=0;
  int i;
  if(a<b){
    k=a;
  }
  else{
    k=b;
  }
  for(i=1; i<=k; i++){
    if(b%i == 0){
      if((b/i) != i){
        if((b/i) <= a){
          x=1;
          break;
        }
      }
      else{
        x=0;
      }
    }
  }
  return x;
}

void main(){
  int a,b;
  scanf("%d", &a);
  scanf("%d", &b);
  printf("%d", check(a,b));
}
