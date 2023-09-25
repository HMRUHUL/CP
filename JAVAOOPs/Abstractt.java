//  An abstract class must be declared with an abstract keyword.
//  It can have abstract and non-abstract methods.
//  It cannot be instantiated.
//  It can have constructors and static methods also.
//  It can have final methods which will force the subclass not to change the body of the method.

abstract class Animal {
    abstract void walk();
    void breathe() {
    System.out.println("This animal breathes air");
    }
    Animal() {
    System.out.println("You are about to create an Animal.");
    }
}
class Horse extends Animal {
    Horse() {
        System.out.println("Wow, you have created a Horse!");
    }
    void walk() {
        System.out.println("Horse walks on 4 legs");
    }
}
class Chicken extends Animal {
    Chicken() {
        System.out.println("Wow, you have created a Chicken!");
    }
    void walk() {
        System.out.println("Chicken walks on 2 legs");
    }
}
public class Abstractt {
    public static void main(String[] args) {
        Horse horse = new Horse(); 
        horse.walk();
        horse.breathe();
        Animal chicken = new Chicken();
        chicken.walk();
        chicken.breathe();
    }
}
