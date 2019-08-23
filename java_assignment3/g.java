class test{
  static{
    System.out.println("This is Static");
  }
  test(){
    System.out.println("New object of test class");
  }
}

class g{
  public static void main(String args[]){
    test t1 = new test();
    test t2 = new test();
  }
}
