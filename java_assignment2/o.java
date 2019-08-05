class o{

  public static double factorial(int x){
    if(x==1 || x==0){
      return 1;
    }
    return x*factorial(x-1);
  }
  public static void main(String args[]){
    System.out.println(factorial(60));
  }
}
