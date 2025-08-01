package OOPS.AbstractionJava;

abstract class Bird {
    abstract void fly();
    abstract void eat();    
}
//  we cannnot extend more than one abstract class because it restricts multiple interitance but in interface we ca do that
class Sparrow extends Bird{

    @Override
    void fly() {
        System.out.println("sparrow fly");
    }

    @Override
    void eat() {
        System.out.println("sparrow eat");
    }
    
}
public class abstraction{
    public static void main(String[] args) {
        Bird b = new Sparrow();
        b.eat();
        // Bird b = new Bird(); it cannot be instanciated
    }
}
