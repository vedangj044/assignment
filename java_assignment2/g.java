class g{
  public static void main(String args[]){
    byte b = 5;

    int i = b;
    float f = b;
    double d = b;
    long l = b;
    short s = b;

    System.out.println(i+"   "+f+"   "+d+"   "+l+"   "+s);

    d = 10;

    i = (int)d;
    f = (float)d;
    l = (long)d;
    s =(short)d;
    b = (byte)d;

    System.out.println(i+"   "+f+"   "+l+"   "+s+"   "+b);

  }
}
