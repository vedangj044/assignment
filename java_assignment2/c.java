import java.util.Scanner;

class c{

  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    int l = in.nextInt();
    int b = 0;
    int a = 1;
    int j = 0;
    System.out.println("0");
    System.out.println("1");

    for(int i=2; i<l; i++){
      j=a+b;
      b=a;
      a=j;
      System.out.println(j);
    }
  }
}
