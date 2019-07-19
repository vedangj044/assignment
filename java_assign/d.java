import java.util.Scanner;

class d{
  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    int i = in.nextInt();
    char k = in.next().charAt(0);
    int j = in.nextInt();
    switch (k) {
      case '+':
        System.out.println(i+j);
        break;
      case '-':
        System.out.println(i-j);
        break;
      case '*':
        System.out.println(i*j);
        break;
      case '/':
        float div = (float)i/j;
        System.out.println(div);
        break;
    }
  }
}
