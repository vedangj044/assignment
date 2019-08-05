import java.lang.Math;
import java.util.Scanner;

class m{
  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    double i = (double)in.nextInt();
    int k = 0;
    int j = 10;
    while(i!=0){
      j = (int)(Math.log(i)/Math.log(2));
      i-=Math.pow(2, j);
      k+= (int)Math.pow(10, j);
    }
    System.out.println(k);
  }
}
