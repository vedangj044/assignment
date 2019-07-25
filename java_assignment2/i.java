import java.util.Scanner;

class i{
  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    int l = in.nextInt();
    int sum = 0;
    while(l!=0){
      sum+=l;
      l = in.nextInt();
    }
    System.out.println(sum);
  }
}
