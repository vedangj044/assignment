import java.util.Scanner;

class f{
  static long t(int n){
    if(n==1 || n==0){
      return n;
    }
    return t(n-1)+n;
  }
  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    int i = in.nextInt();
    System.out.println(t(i));
  }
}
