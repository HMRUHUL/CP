//method overloading 
//Compile Time Polymorphism (Static)
//Runtime polymorphism is also known as dynamic polymorphism/multilevel inheritance
//Function Overriding is an example of runtime polymorphism.

class Person{
    void out(){
        System.out.println("ruhul" );
    }
    void out(int a){
        System.out.println("ruhul " + a );
    }
    void out(int a, int b){
        System.out.println("ruhul " + a + " " +b);
    }    
    
}
class Parents extends Person{
  public void out(){
        System.out.println("class Parents extends Person");
    }
}
class Teacher extends Person{
  public void out(){
        System.out.println("class Teacher extends Person");
        
    }
}
class Polymorphism {
    public static void main(String[] args){

        Person par, tea;
        par = new Parents();
        tea = new Teacher();
        Person p = new Person();
        p.out(1,2);
       // par.out();
       // tea.out();
   }
}
