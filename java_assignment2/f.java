import java.util.Scanner;

class f{
  public static int factorial(int x){
    if(x==1 || x==0){
      return 1;
    }
    return x*factorial(x-1);
  }

  public static void main(String args[]){
    double j = 1;
    Scanner in = new Scanner(System.in);
    int k = in.nextInt();
    for(int i=1; i<=k; i++){
      j+=(float)i/factorial(i);
    }
    if(k>32){
      j=3.71828190;
    }
    System.out.println(j);
  }
}
