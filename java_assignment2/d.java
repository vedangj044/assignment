class c{
  public static void main(String args[]){
    String s = "(a+b+c+e+f+g)";
    int k = 2;
    for(int i=0; i<6; i++){
      for(int j=0; j<k; j++){
        System.out.print(s.charAt(j));
      }
      k+=2;
      System.out.println(")");
    }
  }
}
