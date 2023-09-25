class Person{
    void out(){
        System.out.println("ruhul");
    }
    
}
class Parents extends Person{
  public void oout(){
        System.out.println("class Student extends Parents");
    }
}
class Inheritance {
    public static void main(String[] args){
        System.out.println("ok");
        Parents child = new Parents();
        Person parent = (Person) child;
        parent.out();
   }
}
