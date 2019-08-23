class b{
  public static void main (String a[]){
    String s=new String("English");
    fun(s);
    System.out.println(s);
  }
  static void fun(String s){
    System.out.println(s);
    s="Hindi";
    System.out.println(s);
  }
}
