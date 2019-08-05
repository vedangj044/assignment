import java.lang.Math;
import java.util.Scanner;

class n{
  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    String b = in.nextLine();
    int i = 0;
    for(int v=0; v<b.length(); v++){
      i+=Math.pow(2, b.length()-1-v)*Character.getNumericValue(b.charAt(v));
    }
    System.out.println(i);
    int j = (int)i/8;
    int k = 10*j+i%8;
    System.out.println(k);
  }
}
