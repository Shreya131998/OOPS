package OOPS.JavaPolymorphism;

public class Main {
    public static void main(String[] args) {
        Shape s = new Shape();
        s.draw();

        Circle c = new Circle();
        c.draw();

        Shape s2 = new Circle();
        s2.draw();

        Circle c1 = (Circle)new Shape();
        c1.draw();
    }
}
