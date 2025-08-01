#include<bits/stdc++.h>
using namespace std;
// method overloading
class Add{
    public:
    int sum(int x, int y){
        return x+y;
    }
    double sum(double x, double y){
        return x+y;
    }
    int sum(int x, int y, int z){
        return x+y+z;
    }
};

//  operator overloading
class Complex{
    public:
    int r, int i;
    Complex(int r, int i):r(r),i(i){}
    Complex operator+(Complex &B){
        Complex temp;
        temp.r = this->r+B.r;
        temp.i = thi->i+B.i;
        return temp;
    }
};
int main(){
    //  method overloading
    Add a;
    a.sum(2,3);
    a.sum(2,3,4);

    // operator overloading
    Complex A(2,3);
    Complex B(1,2);
    Complex C = A+B;
    return 0;
}