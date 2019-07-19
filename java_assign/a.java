class a{
  public static void main(String args[]){
    for(int i=0; i<15; i++){
      for(int j=0; j<50; j++){
        if(j<=12 && i<=9){
          if(i%2!=0 && j==12){
            System.out.print("=");
          }
          else{
            System.out.print(" *");
            j++;
          }
        }
        else{
          System.out.print("=");
        }
      }
      System.out.println("");
    }
  }
}
