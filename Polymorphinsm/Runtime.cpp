#include <iostream>

using namespace std;

class Shape
{
public:
    //  using virtual keyword it avoid early binding of the class which is referene , using virtual keyword it binds the actual object
    virtual void draw() final
    {
        cout << "Generic drawing..." << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Circle drawing..." << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Rectangle drawing..." << endl;
    }
};

class Triangle : public Shape
{
public:
    void draw()
    {
        cout << "Triangle drawing..." << endl;
    }
};

void ShapeDrawing(Shape *s)
{
    s->draw(); // draw is polymorphic
}

int main()
{
    // Circle c;
    // Rectangle r;

    // ShapeDrawing(&c);
    // ShapeDrawing(&r);

    // Triangle *t = new Triangle();
    // ShapeDrawing(t);

    //  w/o virtual keyword
    // Shape *s = new Shape();
    // s->draw(); -> Generic drawing

    // // UPCASTING
    // Shape *s3 = new Circle();
    // s3->draw(); -Generic drawing

    // Circle *c = new Circle();
    // c->draw(); - Circle drawing

    // // DOWNCAsTing
    // Shape *s2 = new Shape();
    // Circle *c2 = (Circle *)s2;
    // c2->draw(); ->Circle drawing
    // virtual keyword
    Shape *s = new Shape();
    s->draw(); // -Generic drawing

    // UPCASTING
    Shape *s3 = new Circle();
    s3->draw(); // Circle drawing

    Circle *c = new Circle();
    c->draw(); // Circle drawing

    // DOWNCAsTing
    Shape *s2 = new Shape();
    Circle *c2 = (Circle *)s2;
    c2->draw(); // Generic drawing
    return 0;
}
