import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

class k{
  public static void main(String args[]){
    LocalDateTime a = LocalDateTime.now();
    DateTimeFormatter form = DateTimeFormatter.ofPattern("dd/MM/yyyy HH:mm:ss");

    String b = a.format(form);
    System.out.println(b);
  }
}
