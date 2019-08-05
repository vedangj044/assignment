class p{

  public static boolean prime(double x){
    for(int i=2; i<=x/2; i++){
      if(x%i==0){
        return false;
      }
    }
    return true;
  }

  public static void main(String args[]){
    System.out.println(prime(21000254869723212850.0));
  }
}
