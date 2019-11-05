import java.util.Scanner;

class b{
  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    String s = in.nextLine();
    int sp = 1;
    for(int i = 0; i<s.length(); i++){
      if(s.charAt(i)==' '){
        sp+=1;
      }
    }
    String[] sarr = new String[sp];
    String[] s1arr = new String[sp];
    int j = 0;
    int k = 0;
    String t = "";
    for(int i = 0; i<s.length(); i++){
      if(s.charAt(i)==' '){
        sarr[j]=t;
        t="";
        j+=1;
      }
      else{
        t+=Character.toString(s.charAt(i));
      }
    }
    for(j = 0; j<sp; j++){
      String r="";
      System.out.println(sarr[j].length());
      for(int i = sarr[j].length()-1; i>=0; i--){
        r+=sarr[j].charAt(i);
      }
      s1arr[k] = r;
      k+=1;
    }
    for(int i=0; i<sp; i++){
      System.out.print(s1arr[i]+" ");
    }
  }
}
