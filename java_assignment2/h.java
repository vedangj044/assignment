class h
{
  public static void sum()
  {
    int i=0,sum=0;

    for(i=1;i<=100;i++)
    {
      sum=sum+i;
    }
    System.out.println("Sum from 1 to 100 = "+sum);
  }
  public static void main(String a[])
  {
    sum();
    int sum1 = (100*101)/2;
    System.out.println("Sum from 1 to 100 = "+sum1);
  }
}
