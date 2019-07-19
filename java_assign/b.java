import java.util.Scanner;

class b{
  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    int i = in.nextInt();
    int j = in.nextInt();
    i = i+j;
    j = i-j;
    i = i-j;
    System.out.println(j);
    System.out.println(i);
  }
}
