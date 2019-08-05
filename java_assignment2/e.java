import java.util.Scanner;

class e{
  public static void main(String args[]){
    int j = 0;
    Scanner in = new Scanner(System.in);
    int k = in.nextInt();
    for(int i=0; i<k ; i++){
      j+=i*i;
      System.out.println(j);
    }
  }
}
