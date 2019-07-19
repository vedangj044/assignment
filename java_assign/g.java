import java.util.Scanner;
import java.lang.Math;

class g{
  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    int i = in.nextInt();
    String s = String.valueOf(i);
    int j =  s.length();
    int total= 0;
    for(int k=0; k<j; k++){
      char m = s.charAt(k);
      int a = Character.getNumericValue(m);
      total+=Math.pow(a, j);
    }
    System.out.println(total==i);
  }
}
