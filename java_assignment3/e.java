class e{
  static void digit(long n, int k){
    String s = String.valueOf(n);
    if (k < s.length()){
      System.out.println(s.charAt(s.length()-k-1));
    }
    else{
      System.out.println(0);
    }
  }
  public static void main(String args[]){
    digit(86421, 3);
    digit(86421, 7);
  }
}
