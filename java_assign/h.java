import java.util.Scanner;

class h{
  public int factorial(int x){
    if(x==1){
      return(1);
    }
    return(x*factorial(x-1));
  }

  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    int i = in.nextInt();
    h obj = new h();
    int j = obj.factorial(i);
    System.out.println(j);
  }
}
