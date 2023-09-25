// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.*;
class Student{
    String name;
    int id;
     int getInfo(){
        return this.id;
    }

}
public class Practice {
  public static void main(String[] args) {
      System.out.println("Hello, World!");  
      Student st = new Student();
      st.name = "ruhul";
      st.id  = 15022;
      System.out.println(st.name + " " + st.getInfo());

  }
}