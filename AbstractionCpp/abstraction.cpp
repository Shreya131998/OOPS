//  to make interface seperate from implementation

#include <iostream>
using namespace std;
//  this is interface -> containing one pure virtual function
class Shape{
    public:
    //  now this function needs to be implemented in child class
    virtual void draw() =0;
};
class Circle: public Shape{
    public:
    void draw(){
        cout<<"Circle drawing";
    }
};
class Rectangle: public Shape{
    public:
    void draw(){
        cout<<"Rectangle drawing";
    }
};
int main() {
    // Write C++ code here
    //  Shape *c =new Shape(); -> this shape class cannnot be instantiated
    Shape *c = new Circle();
    c->draw(); // circle drawing
    return 0;
}