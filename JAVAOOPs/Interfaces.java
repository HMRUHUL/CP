// Interfaces
//  All the fields in interfaces are public, static and final by default.
//  All methods are public & abstract by default.
//  A class that implements an interface must implement all the methods declared in the interface.
//  Interfaces support the functionality of multiple inheritance
interface Animal {
  void sleep(); // interface method (does not have a body)
}
interface Sound {
  void animalSound(); // interface method (does not have a body)
}

class Pig implements Animal, Sound {
  public void animalSound() {
    System.out.println("The pig says: wee wee");
  }
  public void sleep() {
    System.out.println("Zzz");
  }
}

class Interfaces {
  public static void main(String[] args) {
    Pig myPig = new Pig();
    myPig.animalSound();  
    myPig.sleep();
  }
}
