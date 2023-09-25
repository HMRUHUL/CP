// To achieve encapsulation in Java −
// o Declare the variables of a class as private.
// o Provide public setter and getter methods to modify and view the variables values
//attributes of the class are kept private or public - getter and setter
// // methods are provided to manipulate these attributes.
// declare class variables/attributes as private
// provide public get and set methods to access and update the value of a private variable


public class Encapsulation {
  public static void main(String[] args) {
    Person myObj = new Person();
    myObj.setName ("John"); 
    System.out.println(myObj.getName()); 
  }
}


// Why Encapsulation?
// Better control of class attributes and methods
// Class attributes can be made read-only (if you only use the get method), or write-only (if you only use the set method)
// Flexible: the programmer can change one part of the code without affecting other parts
// Increased security of data
