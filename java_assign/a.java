class a{
  public static void main(String args[]){
    for(int i=0; i<15; i++){
      for(int j=0; j<40; j++){
        if(j<=12 && i<=9){
          if(i%2!=0){
            if(j==12){
              System.out.print("=");
            }
            else{
              System.out.print(" * ");
              j=j+2;
            }
          }
          else{
            System.out.print("*  ");
            j=j+2;
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
