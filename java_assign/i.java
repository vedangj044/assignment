import java.util.Scanner;

class i{
  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    String s = in.nextLine();
    int j = 1 ;
    for(int i=0; i<s.length(); i++){
      char m = s.charAt(i);
      j=j*(Character.getNumericValue(m));
    }
    System.out.println(j);
  }
}
