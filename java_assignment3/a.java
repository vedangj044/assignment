public class a{
  private String name = "Static class";
  public static void first() { }
  public static void second() { }
  public void third(){
    System.out.println(name);
  }
  public static void main(String args[]) {
    first();
    second();
    a a1 = new a();
    a1.third();
  }
}
