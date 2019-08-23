class b{
  public static void main(String args[]){
    int b = 5;
    for (int i = 0; i < 5; i++){
      for (int j = 0; j < b; j++)
          System.out.print(" ");
      for (int j = 0; j <= i; j++)
          System.out.print("* ");
      System.out.print("\n");
      b-=1;
    }
    for (int i = 6; i > 0; i--){
      for (int j = 0; j < b; j++)
          System.out.print(" ");
      for (int j = 0; j < i; j++)
          System.out.print("* ");
      System.out.print("\n");
      b++;
    }
  }
}
