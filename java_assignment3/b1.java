class intc{
  int x;
}
class b1{
  public static void main (String a[]){
    intc o=new intc();
    fun(o);
    System.out.println(o.x);
  }
  static void fun(intc s){
    System.out.println(s.x);
    s.x=10;
    System.out.println(s);
  }
}
