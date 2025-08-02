package OOPS.AbstractionJava;
interface Birds {
    void fly();
}
//  can add multile interface , and this supports multiple inheritance we can add using implements
class Sparrows implements Birds{

    @Override
    public void fly() {
        System.out.println("sparrow fly");
    }
    
}
public class InterfaceEmp {
    public static void main(String[] args) {
        Birds b = new Sparrows();
        b.fly();
        //  Bird b = new Bird() cannotbe instantiated
    }
}
