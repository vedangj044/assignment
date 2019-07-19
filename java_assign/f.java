import java.util.Scanner;

class f{
  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    int i = in.nextInt();
    for(int j=1; j<=10; j++){
      System.out.println(i+"*"+j+"="+i*j);
    }
  }
}
